//
//  Mapper.hpp
//  DoubleConversion
//
//  Created by Szymon Kapala on 20/03/2020.
//

#ifndef Mapper_h
#define Mapper_h

#include <stdio.h>
#include "Applier.h"

using namespace facebook;

class Mapper {
  std::shared_ptr<Applier> applier;
public:
  Mapper(int id,
  std::shared_ptr<Applier> applier,
  std::vector<int> inputIds,
  std::vector<int> outputIds
  );
  void execute(jsi::Runtime &rt, std::shared_ptr<BaseWorkletModule> module);
  std::shared_ptr<Mapper> createMapper(int id,
                                       std::shared_ptr<Applier> applier,
                                       std::shared_ptr<SharedValueRegistry> sharedValueRegistry);
  virtual ~Mapper(){}
  
  std::vector<int> inputIds;
  std::vector<int> outputIds;
  int id;
};

#endif /* Mapper_h */
