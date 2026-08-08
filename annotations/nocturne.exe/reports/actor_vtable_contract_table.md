
### `CDemonActor` — slots 0..51

| slot | method | overridden by | params |
|---:|---|---|---:|
| 0 | `setup` | `CCharacter`, `CNPC`, `CEnemy`, `CHero` | 1 |
| 1 | `process` | `CNPC` | 0 |
| 2 | `renderOpaque` | `CCharacter` | 0 |
| 3 | `renderTransparent` | `CCharacter` | 0 |
| 4 | `renderBackground` | `CCharacter`, `CNPC`, `CEnemy` | 0 |
| 5 | `getBoundingBox` | `CCharacter` | 2 |
| 6 | `processFootstep` | — | 0 |
| 7 | `processFootstepAt` | — | 0 |
| 8 | `handleFootstep` | — | 0 |
| 9 | `playSound` | — | 0 |
| 10 | `playAmbientSound` | — | 0 |
| 11 | `playSoundWithDelay` | — | 0 |
| 12 | `playAmbientSoundWithDelay` | — | 0 |
| 13 | `getCollisionType` | `CCharacter` | 0 |
| 14 | `cylinderGroundCheck` | — | 0 |
| 15 | `getGroundType` | — | 0 |
| 16 | `getBlockVirtualDirectorFlag` | — | 0 |
| 17 | `allowBulletHoles` | — | 0 |
| 18 | `updateCollisionData` | — | 0 |
| 19 | `getTargetPoints` | `CEnemy` | 0 |
| 20 | `renderTargetPoints` | — | 0 |
| 21 | `canLookAt` | `CCharacter`, `CHero` | 0 |
| 22 | `evaluateTriggerCondition` | — | 0 |
| 23 | `processActionButton` | — | 0 |
| 24 | `setPositionAndOrientation` | `CCharacter` | 0 |
| 25 | `onPickup` | — | 2 |
| 26 | `shouldIgnoreForTargeting` | — | 1 |
| 27 | `getAllowedMeleeAttackTypes` | — | 1 |
| 28 | `processMeleeHit` | — | 0 |
| 29 | `fillAttackDamageInfo` | — | 0 |
| 30 | `playAttackHitEffects` | — | 4 |
| 31 | `canPickup` | — | 0 |
| 32 | `pickup` | — | 0 |
| 33 | `onDropped` | — | 0 |
| 34 | `drop` | `CCharacter` | 0 |
| 35 | `getCarrier` | — | 0 |
| 36 | `getInteractionInfo` | — | 0 |
| 37 | `startInteraction` | — | 0 |
| 38 | `updateInteraction` | — | 0 |
| 39 | `stopUsing` | — | 0 |
| 40 | `spawnFlies` | `CCharacter` | 3 |
| 41 | `testPointInCylinder` | `CHero` | 3 |
| 42 | `testLineIntersection` | `CHero` | 4 |
| 43 | `onLaserHit` | — | 0 |
| 44 | `customRayIntersect` | — | 0 |
| 45 | `customIntersectCylinderXZ` | — | 0 |
| 46 | `customGetFloorHeight` | — | 0 |
| 47 | `getPathMap` | `CNPC`, `CHero` | 0 |
| 48 | `calculateChecksum` | `CCharacter` | 2 |
| 49 | `getActorType` | `CNPC` | 0 |
| 50 | `dtor` | `CCharacter`, `CNPC`, `CEnemy`, `CHero` | 2 |
| 51 | `archive` | `CCharacter`, `CNPC`, `CEnemy`, `CHero` | 1 |

### `CCharacter` — slots 52..77 (on top of `CDemonActor`)

| slot | method | overridden by | params |
|---:|---|---|---:|
| 52 | `applyDamage` | — | 0 |
| 53 | `kill` | `CHero` | 4 |
| 54 | `canWalk` | `CNPC`, `CHero` | 0 |
| 55 | `isGrabbable` | `CHero` | 2 |
| 56 | `isGrabbable` | `CHero` | 2 |
| 57 | `isGrabbable` | `CHero` | 2 |
| 58 | `releaseFromGrab` | `CHero` | 1 |
| 59 | `getGrabber` | — | 0 |
| 60 | `releaseVictim` | `CEnemy` | 0 |
| 61 | `releaseVictim` | `CEnemy` | 0 |
| 62 | `checkCylinderCollisionWorld` | — | 0 |
| 63 | `testDamageLine` | — | 0 |
| 64 | `processDamage` | `CNPC`, `CEnemy` | 2 |
| 65 | `getDeathState` | — | 1 |
| 66 | `attractActorToward` | — | 0 |
| 67 | `isGrabbable` | — | 2 |
| 68 | `getPartDominantBone` | — | 0 |
| 69 | `setDoorTarget` | — | 2 |
| 70 | `clearDoorTarget` | — | 0 |
| 71 | `hasDoorTarget` | — | 0 |
| 72 | `dropCarriedObject` | — | 3 |
| 73 | `getCarryObjToBodyXForm` | — | 0 |
| 74 | `setWalkTarget` | — | 4 |
| 75 | `setWalkTargetImmediate` | — | 0 |
| 76 | `setWalkTimeout` | — | 0 |
| 77 | `isWalkComplete` | — | 0 |

### `CNPC` — adds no slots of its own


### `CEnemy` — slots 78..79 (on top of `CCharacter`)

| slot | method | overridden by | params |
|---:|---|---|---:|
| 78 | `getTargetPoint` | — | 0 |
| 79 | `updateVictim` | — | 2 |

### `CHero` — slots 78..81 (on top of `CCharacter`)

| slot | method | overridden by | params |
|---:|---|---|---:|
| 78 | `createDefaultWeapon` | — | 0 |
| 79 | `handlePureVirtualCall` | — | 0 |
| 80 | `handlePureVirtualCall` | — | 0 |
| 81 | `reset` | — | 1 |
