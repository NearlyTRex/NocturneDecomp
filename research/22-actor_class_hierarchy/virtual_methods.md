# Virtual methods by slot

Methods and signatures are nocedit.exe's. Each build's column is the slot index there (`—`: the build has no such slot). Evidence: `M` anchored or forced by neighbours, `S` forced by the editor block, `H` agreed by every class sharing the slot. Parameters: per build, the verdicts over every class's implementation of the slot — `a` agree, `c` conflict, `u` unverifiable (no measurable call site).


## CDemonActor

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `setup` | `void setup()` | 0 | 0M | 0M | 2M | 0M | nocturne a96; bw1 a95; blairwitch2 a58 u36; bw3 a56 u1 |
| `process` | `void process(float delta_time)` | 1 | 1M | 3H | 5H | 3M | nocturne a99; bw1 a94 u5; blairwitch2 a57 u41; bw3 a53 u5 |
| `renderOpaque` | `int renderOpaque()` | 2 | 2M | 4H | 6H | 4M | nocturne a65 u3; bw1 a65 u4; blairwitch2 a28 u40; bw3 a38 u3 |
| `renderTransparent` | `int renderTransparent()` | 3 | 3M | 5H | 7H | 5M | nocturne a24 u3; bw1 a23 u5; blairwitch2 a10 u18; bw3 a18 u3 |
| `renderBackground` | `void renderBackground(int layer_flag)` | 4 | 4M | 6M | 8M | 6M | nocturne a20; bw1 a20; blairwitch2 a6 u14; bw3 a14 u1 |
| `getBoundingBox` | `CBoundingBox3D* getBoundingBox(CBoundingBox3D* out_box)` | 5 | 5M | 7M | 9M | 7M | nocturne u54; bw1 u54; blairwitch2 u53; bw3 u45 |
| `processFootstep` | `uint processFootstep(float volume)` | 6 | 6M | 8M | 10M | 8M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `processFootstepAtOffset` | `uint processFootstepAtOffset(CVector3f* location, float volume)` | 7 | 7M | 9M | 11M | 9M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `handleFootstep` | `uint handleFootstep(CVector3f* position, EGroundType ground_type, float volume)` | 8 | 8M | 10M | 12M | 10M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `playSound` | `uint playSound(char* sound_name)` | 9 | 9M | 11M | 13M | 11M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `playAmbientSound` | `uint playAmbientSound(char* sound_name)` | 10 | 10M | 12M | 14M | 12M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `playSoundWithDelay` | `uint playSoundWithDelay(char* sound_name, float delay)` | 11 | 11M | 13M | 15M | 13M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `playAmbientSoundWithDelay` | `uint playAmbientSoundWithDelay(char* sound_name, float delay)` | 12 | 12M | 14M | 16M | 14M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `getCollisionType` | `ECollisionType getCollisionType(SCollisionInfo* collision_info)` | 13 | 13M | 15M | 17M | 15M | nocturne a65 u1; bw1 a65 u1; blairwitch2 a22 u43; bw3 a45 u1 |
| `cylinderGroundCheck` | `float cylinderGroundCheck(float radius, CVector3f* out_normal)` | 14 | 14M | 16M | 18M | 16M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `getGroundType` | `EGroundType getGroundType()` | 15 | 15M | 17M | 19M | 17M | nocturne u10; bw1 u10; blairwitch2 u10; bw3 u9 |
| `getBlockVirtualDirectorFlag` | `int getBlockVirtualDirectorFlag()` | 16 | 16M | 18M | 20M | 18M | nocturne u5; bw1 u5; blairwitch2 u4; bw3 u5 |
| `allowBulletHoles` | `int allowBulletHoles()` | 17 | 17M | 19M | 21M | 19M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u3 |
| `updateCollisionData` | `void updateCollisionData()` | 18 | 18M | 20M | 22M | 20M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u3 |
| `getTargetPoints` | `int getTargetPoints(CVector3f* out_points_array)` | 19 | 19M | 21M | 23M | 21M | nocturne u29; bw1 u29; blairwitch2 a18 u11; bw3 u16 |
| `renderTargetPoints` | `void renderTargetPoints()` | 20 | 20M | 22M | 24M | 22M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `canLookAt` | `int canLookAt()` | 21 | 21M | 23M | 25M | 23M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u2 |
| `evaluateTriggerCondition` | `float evaluateTriggerCondition(CDemonActor* querying_actor, CVector3f* query_position)` | 22 | 22M | 24M | 26M | 24M | nocturne u2; bw1 u2; blairwitch2 u2; bw3 u2 |
| `processActionButton` | `int processActionButton()` | 23 | 23M | 25M | 27M | 25M | nocturne u2; bw1 u2; blairwitch2 u2; bw3 u2 |
| `setPositionAndOrientation` | `void setPositionAndOrientation(CVector3f* new_position, CVector3f* new_orientation)` | 24 | 24M | 26M | 28M | 26M | nocturne a4; bw1 a4; blairwitch2 a3 u1; bw3 a3 |
| `onPickup` | `void onPickup(CDemonActor* owner)` | 25 | 25M | 27M | 29M | 27M | nocturne a5; bw1 a5; blairwitch2 a1 u4; bw3 a5 |
| `shouldIgnoreForTargeting` | `int shouldIgnoreForTargeting()` | 26 | 26M | 28M | 30M | 28M | nocturne a3; bw1 a3; blairwitch2 a1 u2; bw3 a2 |
| `getAllowedMeleeAttackTypes` | `int getAllowedMeleeAttackTypes()` | 27 | 27M | 29M | 31M | 29M | nocturne a4; bw1 a4; blairwitch2 a1 u3; bw3 a4 |
| `processMeleeHit` | `int processMeleeHit(int hit_type)` | 28 | 28M | 30M | 32M | 30M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `fillAttackDamageInfo` | `void fillAttackDamageInfo(int attack_flags, SDamageInfo* out_damage_info, CDemonActor* victim)` | 29 | 29M | 31M | 33M | 31M | nocturne a3; bw1 a3; blairwitch2 a1 u2; bw3 a3 |
| `playAttackHitEffects` | `void playAttackHitEffects(int attack_flags, SDamageInfo* damage_info, CDemonActor* victim)` | 30 | 30M | 32M | 34M | 32M | nocturne a2; bw1 u2; blairwitch2 u2; bw3 u2 |
| `canPickup` | `int canPickup(CDemonActor* picker)` | 31 | 31M | 33M | 35M | 33M | nocturne a16 u1; bw1 a16 u1; blairwitch2 a3 u14; bw3 u16 |
| `pickup` | `void pickup(CDemonActor* carrier)` | 32 | 32M | 34M | 36M | 34M | nocturne u9; bw1 u9; blairwitch2 u9; bw3 u9 |
| `onDropped` | `void onDropped(CVector3f* drop_position)` | 33 | 33M | 35M | 37M | 35M | nocturne u9; bw1 u9; blairwitch2 u9; bw3 u9 |
| `drop` | `void drop(CDemonActor* carrier, CVector3f* drop_position)` | 34 | 34M | 36M | 38M | 36M | nocturne a2 u1; bw1 a2 u1; blairwitch2 a2 u1; bw3 a1 u1 |
| `getCarrier` | `CDemonActor* getCarrier()` | 35 | 35M | 37M | 39M | 37M | nocturne u9; bw1 u9; blairwitch2 u9; bw3 u9 |
| `getInteractionInfo` | `void getInteractionInfo(SInteractionInfo* out_info)` | 36 | 36M | 38M | 40M | 38M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u1 |
| `startInteraction` | `int startInteraction(CDemonActor* user)` | 37 | 37M | 39M | 41M | 39M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u1 |
| `updateInteraction` | `int updateInteraction(UOrientationVector* user_orientation, SPlayerInput* player_control)` | 38 | 38M | 40M | 42M | 40M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u1 |
| `stopInteraction` | `void stopInteraction(CDemonActor* user)` | 39 | 39M | 41M | 43M | 41M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u1 |
| `spawnFlies` | `void spawnFlies(int fly_count, float spawn_radius)` | 40 | 40M | 42M | 44M | 42M | nocturne a2; bw1 a2; blairwitch2 a1 u1; bw3 a2 |
| `testCylinderCollision` | `int testCylinderCollision(SCollisionReturnInfo* collision_info, float tolerance)` | 41 | 41M | 43M | 45M | 43M | nocturne a2; bw1 a2; blairwitch2 a1 u1; bw3 a1 |
| `testLineIntersection` | `int testLineIntersection(CVector3f* line_start, CVector3f* line_end, CVector3f* out_intersection_point)` | 42 | 42M | 44M | 46M | 44M | nocturne a2; bw1 a2; blairwitch2 a1 u1; bw3 a1 |
| `onLaserHit` | `void onLaserHit(SLaserInfo* laser_info)` | 43 | 43M | 45M | 47M | 45M | nocturne u6; bw1 u7; blairwitch2 u7; bw3 u5 |
| `customRayIntersect` | `float customRayIntersect(CVector3f* ray_origin, CVector3f* ray_direction, CVector3f* out_normal)` | 44 | 44M | 46M | 48M | 46M | nocturne u4; bw1 u4; blairwitch2 u4; bw3 u3 |
| `customIntersectCylinderXZ` | `void customIntersectCylinderXZ(SIntersectXZCylinder* cylinder)` | 45 | 45M | 47M | 49M | 47M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u2 |
| `customGetFloorHeight` | `int customGetFloorHeight(CVector3f* position, float search_radius, float* out_floor_height)` | 46 | 46M | 48M | 50M | 48M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u2 |
| `getPathMap` | `CPathMap* getPathMap()` | 47 | 47M | 49M | 51M | 49M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u2 |
| `calculateChecksum` | `void calculateChecksum(uint* out_crc)` | 48 | 48M | 50M | 52M | 50M | nocturne a2; bw1 a2; blairwitch2 a1 u1; bw3 a2 |
| `getActorType` | `CDemonActorType* getActorType()` | 49 | 49M | 51M | 53M | 51M | nocturne u108; bw1 u108; blairwitch2 u107; bw3 u65 |
| `onAreaDeleted` | `void onAreaDeleted(int deleted_area_index)` | 50 | — | — | — | — | — |
| `onActorDeleted` | `void onActorDeleted(CDemonActor* deleted_actor)` | 51 | — | — | — | — | — |
| `processInEditor` | `void processInEditor()` | 52 | — | — | — | — | — |
| `getPropertyList` | `void getPropertyList(CActorPropertyList* property_list)` | 53 | — | — | — | — | — |
| `initializeInEditor` | `int initializeInEditor()` | 54 | — | — | — | — | — |
| `showEditorHelp` | `void showEditorHelp(int* y_pos)` | 55 | — | — | — | — | — |
| `addFilesToExtract` | `void addFilesToExtract(_FILE* file_handle)` | 56 | — | — | — | — | — |
| `dtor` | `CDemonActor* dtor(uint flags)` | 57 | 50M | 52M | 54M | 52M | nocturne a3 u109; bw1 a2 u109; blairwitch2 a3 u107; bw3 a2 u66 |
| `archive` | `void archive()` | 58 | 51M | 53M | 55M | 53M | nocturne a52 u45; bw1 a51 u45; blairwitch2 a51 u44; bw3 a22 u39 |

## CCharacter

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `applyDamage` | `void applyDamage(int damage_type, float damage_amount)` | 59 | 52M | 54M | 56M | 54M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `kill` | `void kill(int damage_type, CVector3f* damage_direction, float impact_force)` | 60 | 53M | 55M | 57M | 55M | nocturne a2; bw1 a2; blairwitch2 a2; bw3 a1 |
| `isInvulnerable` | `int isInvulnerable()` | 61 | 54M | 56M | 58M | 56M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u3 |
| `isGrabbable` | `int isGrabbable(CDemonActor* grabber)` | 62 | 55M | 57M | 59M | 57M | nocturne a1 u4; bw1 a1 u4; blairwitch2 a1 u4; bw3 u4 |
| `canBeGrabbed` | `int canBeGrabbed(CDemonActor* grabber)` | 63 | 56M | 58M | 60M | 58M | nocturne a1 u3; bw1 a1 u3; blairwitch2 a1 u3; bw3 u2 |
| `getGrabbed` | `int getGrabbed(CDemonActor* grabber)` | 64 | 57M | 59M | 61M | 59M | nocturne a6; bw1 a6; blairwitch2 a6; bw3 u2 |
| `releaseFromGrab` | `void releaseFromGrab()` | 65 | 58M | 60M | 62M | 60M | nocturne a2; bw1 a2; blairwitch2 a2; bw3 a1 |
| `getGrabber` | `CDemonActor* getGrabber()` | 66 | 59M | 61M | 63M | 61M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `releaseVictim` | `void releaseVictim()` | 67 | 60M | 62M | 64M | 62M | nocturne u2; bw1 u2; blairwitch2 u2; bw3 u2 |
| `onVictimLost` | `void onVictimLost()` | 68 | 61M | 63M | 65M | 63M | nocturne u2; bw1 u2; blairwitch2 u2; bw3 u2 |
| `checkCylinderCollisionWorld` | `int checkCylinderCollisionWorld(CVector3f* world_point, float tolerance, SDamageInfo* damage_info)` | 69 | 62M | 64M | 66M | 64M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `testDamageLine` | `int testDamageLine(CVector3f* start, CVector3f* end, SDamageInfo* damage_info, CVector3f* out_hit)` | 70 | 63M | 65M | 67M | 65M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `processDamage` | `void processDamage(SDamageInfo* damage_info)` | 71 | 64M | 66M | 68M | 66M | nocturne a40; bw1 a40; blairwitch2 a40; bw3 a15 |
| `getDeathState` | `EDeathState getDeathState()` | 72 | 65M | 67M | 69M | 67M | nocturne a10; bw1 a10; blairwitch2 a10; bw3 a5 u1 |
| `attractActorToward` | `int attractActorToward(CDemonActor* actor, CVector3f* target_local_point)` | 73 | 66M | 68M | 70M | 68M | nocturne u5; bw1 u5; blairwitch2 u5; bw3 u3 |
| `canBeAttracted` | `int canBeAttracted(CDemonActor* grabber)` | 74 | 67M | 69M | 71M | 69M | nocturne a1 u2; bw1 a1 u2; blairwitch2 a1 u2; bw3 u3 |
| `getPartDominantBone` | `int getPartDominantBone(int part_index)` | 75 | 68M | 70M | 72M | 70M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `setDoorTarget` | `void setDoorTarget(CDoor* door_target)` | 76 | 69M | 71M | 73M | 71M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `clearDoorTarget` | `void clearDoorTarget()` | 77 | 70M | 72M | 74M | 72M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `hasDoorTarget` | `int hasDoorTarget()` | 78 | 71M | 73M | 75M | 73M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `dropCarriedObject` | `void dropCarriedObject(int hand_index, CVector3f* drop_direction)` | 79 | 72M | 74M | 76M | 74M | nocturne a2; bw1 a2; blairwitch2 a2; bw3 a1 |
| `getCarryObjToBodyXForm` | `CMatrix3x4f* getCarryObjToBodyXForm(int hand_index, CMatrix3x4f* out_matrix)` | 80 | 73M | 75M | 77M | 75M | nocturne u12; bw1 u12; blairwitch2 u12; bw3 u4 |
| `setWalkTarget` | `void setWalkTarget(CDemonActor* target, float min_distance, float max_distance)` | 81 | 74M | 76M | 78M | 76M | nocturne a2; bw1 a2; blairwitch2 a2; bw3 a2 |
| `setWalkTargetImmediate` | `void setWalkTargetImmediate(CDemonActor* target)` | 82 | 75M | 77M | 79M | 77M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `setWalkTimeout` | `void setWalkTimeout(float timeout)` | 83 | 76M | 78M | 80M | 78M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `isWalkComplete` | `int isWalkComplete()` | 84 | 77M | 79M | 81M | 79M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |

## CWeapon

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `onFired` | `void onFired()` | 59 | 52M | 54M | 56M | 54M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u2 |
| `setWeaponState` | `void setWeaponState(int weapon_state)` | 60 | 53M | 55M | 57M | 55M | nocturne a4; bw1 a4; blairwitch2 a4; bw3 a3 |
| `getMuzzlePoint` | `CVector3f* getMuzzlePoint(CVector3f* out_point)` | 61 | 54M | 56M | 58M | 56M | nocturne u3; bw1 u5; blairwitch2 u5; bw3 u2 |
| `fire` | `int fire()` | 62 | 55M | 57M | 59M | 57M | nocturne a14; bw1 a12 u2; blairwitch2 a13 u1; bw3 a7 u1 |
| `isReadyToFire` | `int isReadyToFire()` | 63 | 56M | 58M | 60M | 58M | nocturne u2; bw1 u2; blairwitch2 u2; bw3 u1 |
| `getDamage` | `float getDamage()` | 64 | 57M | 59M | 61M | 59M | nocturne u13; bw1 u13; blairwitch2 u13; bw3 u8 |
| `renderAimBeam` | `void renderAimBeam()` | 65 | 58M | 60M | 62M | 60M | nocturne u9; bw1 a7 u3; blairwitch2 a9 u1; bw3 a5 u1 |
| `updateLighting` | `void updateLighting()` | 66 | 59M | 61M | 63M | 61M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |

## CEnemy

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `getTargetPoint` | `CVector3f* getTargetPoint(CVector3f* out_point)` | 85 | 78M | 80M | 83M | 80M | nocturne u3; bw1 u3; blairwitch2 u3; bw3 u2 |
| `updateVictim` | `void updateVictim(float delta_time)` | 86 | 79M | 81M | 84M | 81M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |
| `randomize` | `void randomize()` | 87 | — | — | — | 82M | bw3 u1 |

## CHero

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `createDefaultWeapon` | `void createDefaultWeapon()` | 85 | 78M | 80M | 83M | — | nocturne a2; bw1 a2; blairwitch2 a2 |
| `drawWeapon` | `undefined1 drawWeapon()` | 86 | 79M | 81M | 84M | — | nocturne u10; bw1 u9; blairwitch2 u9 |
| `isWeaponDrawn` | `undefined1 isWeaponDrawn()` | 87 | 80M | 82M | 85M | — | nocturne u10; bw1 u9; blairwitch2 u9 |
| `reset` | `void reset()` | 88 | 81M | 83M | 86M | — | nocturne u2; bw1 u2; blairwitch2 u2 |

## CBoneGuy

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `reset` | `void reset()` | 88 | 80M | 82M | 85M | 83M | nocturne u1; bw1 u1; blairwitch2 u1; bw3 u1 |

## CMobster

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `reset` | `void reset()` | 88 | 80M | 82M | 85M | — | nocturne u1; bw1 u1; blairwitch2 u1 |

## CSmiley

| method | signature | nocedit | nocturne | bw1 | blairwitch2 | bw3 | params |
|---|---|---|---|---|---|---|---|
| `reset` | `void reset()` | 88 | 80M | 82M | 85M | — | nocturne u1; bw1 u1; blairwitch2 u1 |

## Slots with no reference method

Slots a build added to a class's table; nothing in nocedit.exe names them. A name shown is from `added_slot_names.json` below.

| build | slot | name | function | unit | tables showing it first |
|---|---:|---|---|---|---|
| bw1 | 1 | `markResourcesInUse` | `00408890` | core_actor.cpp | CDemonActor |
| bw1 | 2 | — | `00408890` | core_actor.cpp | CDemonActor |
| bw1 | 84 | `toggleGoggles` | `004ec9e0` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| bw1 | 85 | `canReachPickup` | `004eade0` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| bw1 | 86 | `doHeroAction` | `004ec640` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| bw1 | 87 | `canDoHeroAction` | `004ec950` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| blairwitch2 | 0 | — | `0040ced0` | core_actor.cpp | CDemonActor |
| blairwitch2 | 1 | — | `0040ced0` | core_actor.cpp | CDemonActor |
| blairwitch2 | 3 | — | `00408ac0` | core_actor.cpp | CDemonActor |
| blairwitch2 | 4 | — | `00408ac0` | core_actor.cpp | CDemonActor |
| blairwitch2 | 82 | `setCharacterModel` | `0042b440` | core_charactr.cpp | CCharacter |
| blairwitch2 | 87 | — | `004d0750` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| blairwitch2 | 88 | `canReachPickup` | `004cea40` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| blairwitch2 | 89 | `doHeroAction` | `004d03b0` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| blairwitch2 | 90 | `canDoHeroAction` | `004d06c0` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| blairwitch2 | 91 | `setInventoryIndex` | `004ce3b0` | core_hero.cpp | CBaron, CColonel, CGabriella, CHaystack, CIcePick, CMoloch, CScat, CStranger, CSvetlana |
| bw3 | 1 | `markResourcesInUse` | `004088d0` | core_actor.cpp | CDemonActor |
| bw3 | 2 | — | `004088d0` | core_actor.cpp | CDemonActor |
| bw3 | 62 | — | `0057b030` | core_weapon.cpp | CWeapon |

## Named added slots

From `added_slot_names.json`, the baseline for naming further added slots: each entry and the fact that settles it.

| build | class | slot | method | basis |
|---|---|---:|---|---|
| bw1 | CDemnfolk | 82 | `void playChaseSound()` | Plays "demn_&lt;name&gt;_chase?.wav" or "_taunt?.wav". |
| bw1 | CDemnfolk | 83 | `void playHurtSound()` | Plays "demn_&lt;name&gt;_hurt?.wav". |
| bw1 | CDemnfolk | 84 | `void playDeathSound()` | Plays "demn_&lt;name&gt;_die.wav". |
| bw1 | CDemnfolk | 85 | `void playFeedingSound()` | Plays "ghoul-dig-?.wav" or "ghoul-eat-?.wav". |
| bw1 | CDemonActor | 1 | `void markResourcesInUse()` | CCharacter's override marks its model (+0x24a8) and skeleton in use in their pools; the mission's actor setup clears the marks, calls this slot on every actor, purges what is unmarked, then calls setup. |
| bw1 | CDjien | 82 | `void damageSack(SDamageInfo* damage)` | Adds the hit's damage to the sack slot 83 maps it to; past the threshold spawns a body part and fires the "DjienSackBlown" event. |
| bw1 | CDjien | 83 | `int getSackIndex(int part_id)` | Returns 0..5 for the six sack part ids at +0xc2b0..+0xc2c4, -1 for any other. |
| bw1 | CHero | 84 | `void toggleGoggles()` | Called when CGame+0x54 (nocedit key_infrared) is pressed; CDoc's override flips its CGoggles item. |
| bw1 | CHero | 85 | `int canReachPickup(CDemonActor* item, int pickup_type, float* best_distance)` | The pickup search calls it per nearby actor with canPickup()'s result and a running best distance; success enters pickup state 4. |
| bw1 | CHero | 86 | `void doHeroAction()` | Body strings "CHero::doHeroAction - type=eHeroAction...". |
| bw1 | CHero | 87 | `int canDoHeroAction(int action_type)` | The action selector asks it for each action type before trying that action. |
| blairwitch2 | CBasicEnemy | 86 | `void processBurnState(float delta_time)` | The state dispatcher calls it in state "Burn". |
| blairwitch2 | CBasicEnemy | 87 | `void advanceMotion(float delta_time)` | Advances the motion controller by dt; motion events above 100 go to slot 90, the rest to CCharacter_processMotion. |
| blairwitch2 | CBasicEnemy | 88 | `void processStates(float delta_time, int mode)` | Mode 0 registers the class's state names, mode 1 runs the current state's handler. |
| blairwitch2 | CBasicEnemy | 90 | `void processMotionEvent(int event_id)` | Receives motion events above 100 from slot 87; overrides play the event's sound or apply its melee damage. |
| blairwitch2 | CBasicEnemy | 91 | `void startBurn(CVector3f* direction, float strength)` | The cross's blast calls it on each living enemy in range; a burnable enemy enters state "Burn". |
| blairwitch2 | CBasicEnemy | 92 | `void processAnimationState(float delta_time)` | The state dispatcher calls it in state "Animation". |
| blairwitch2 | CBasicEnemy | 93 | `void processDeathState(float delta_time)` | The state dispatcher calls it in state "Death". |
| blairwitch2 | CBasicEnemy | 94 | `void processChasingState(float delta_time)` | The state dispatcher calls it in state "Chasing". |
| blairwitch2 | CBasicEnemy | 95 | `int checkVictim()` | Returns 1 while the victim (+0x10a78) is alive; otherwise clears it and returns to the previous state. |
| blairwitch2 | CCharacter | 82 | `void setCharacterModel(char* model_name, char* cloth_name)` | Dispatched by the script command "setCharacterModel(actor, model, cloth)". |
| blairwitch2 | CConfederateZombie | 96 | `void processRangeAttackState(float delta_time)` | The class's processStates maps "RangeAttack" to this slot. |
| blairwitch2 | CConfederateZombie | 97 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CDog | 96 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CDog | 97 | `void processChaseFoodState(float delta_time)` | The class's processStates maps "ChaseFood" to this slot. |
| blairwitch2 | CDog | 98 | `void processLeapAttackState(float delta_time)` | The class's processStates maps "LeapAttack" to this slot. |
| blairwitch2 | CGhostChild | 96 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CGhostChild | 97 | `void processSleepState(float delta_time)` | The class's processStates maps "Sleep" to this slot. |
| blairwitch2 | CHag | 96 | `void processHagAlertState(float delta_time)` | The class's processStates maps "HagAlert" to this slot. |
| blairwitch2 | CHag | 97 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CHag | 98 | `void processHealingState(float delta_time)` | The class's processStates maps "Healing" to this slot. |
| blairwitch2 | CHand | 96 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CHand | 97 | `void processSleepingState(float delta_time)` | The class's processStates maps "Sleeping" to this slot. |
| blairwitch2 | CHero | 88 | `int canReachPickup(CDemonActor* item, int pickup_type, float* best_distance)` | Called by the pickup search, as bw1 slot 85. |
| blairwitch2 | CHero | 89 | `void doHeroAction()` | Body strings "CHero::doHeroAction - type=...". |
| blairwitch2 | CHero | 90 | `int canDoHeroAction(int action_type)` | Body identical to bw1 slot 87; dispatched by the action selector. |
| blairwitch2 | CHero | 91 | `void setInventoryIndex(int index)` | Called by the script command "setInventoryIndex(%d)". |
| blairwitch2 | CRobin | 96 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CSchnellGeist | 96 | `void processLeapAttackState(float delta_time)` | The class's processStates maps "LeapAttack" to this slot. |
| blairwitch2 | CSchnellGeist | 97 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| blairwitch2 | CUnionZombie | 96 | `void processVanishAttackState(float delta_time)` | The class's processStates maps "VanishAttack" to this slot. |
| blairwitch2 | CUnionZombie | 97 | `void processMeleeAttackState(float delta_time)` | The class's processStates maps "MeleeAttack" to this slot. |
| bw3 | CDemonActor | 1 | `void markResourcesInUse()` | Same as bw1: CCharacter's override marks its model and skeleton in use. |
| bw3 | CHero | 80 | `void createDefaultWeapon()` | nocedit CHero slot 85, the first of CHero's four methods; CPrye's override fills the inventory with its starting weapons. |
| bw3 | CHero | 81 | `void drawWeapon(int drawn)` | nocedit CHero slot 86; same body as nocedit CStranger_drawWeapon. |
| bw3 | CHero | 82 | `int isWeaponDrawn()` | nocedit CHero slot 87; returns the field drawWeapon sets (+0x20bcc). |
| bw3 | CHero | 83 | `void reset()` | nocedit CHero slot 88; the implementation is already named CStranger_reset. |
| bw3 | CHero | 84 | `void toggleGoggles()` | CPrye's override flips its CGoggles item; dispatched from the game input handler. |
| bw3 | CHero | 85 | `int canReachPickup(CDemonActor* item, int pickup_type, float* best_distance)` | Called by the pickup search, as bw1 slot 85. |
| bw3 | CHero | 86 | `void doHeroAction()` | Body strings "CHero::doHeroAction - type=..." and "CPrye::doHeroAction - type=...". |
| bw3 | CHero | 87 | `int canDoHeroAction(int action_type)` | The action selector asks it for each action type, as bw1 slot 87. |
