; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CVector3f        Stack[-0x30]:12  CStack_30
; CVector3f *      Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e771d
;
; Referenced Globals:
;   TerminatedCString s_core_ghoul_cpp_0062dc21
;   TerminatedCString s_CGhoul_findDarkWayPoint__0062dc33
;   TerminatedCString s_darkPoint_0062df3e
;   char*[1] g_GhoulWayPointTypes
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CGhoulClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CDemonSetInstance.actors[1]
;   undefined4 g_CDemonSetInstance.enemy_count
;   undefined4 g_CDemonSetInstance.enemies[0]
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_getPathMap_FUN_00548500
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e63d0
        ;   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
    PUSH ESI                            ; 004e63d1
    PUSH EDI                            ; 004e63d2
    PUSH EBP                            ; 004e63d3
    SUB ESP,0x20                        ; 004e63d4
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e63d7
    CMP dword ptr [EBP + 0xbf24],0x0    ; 004e63db
    JNZ 0x004e63fd                      ; 004e63e2
        ;   XREF to: 004e63fd (CONDITIONAL_JUMP)  ; LAB_004e63fd
    FLD float ptr [EBP + 0xbf20]        ; 004e63e4
    FSUB float ptr [ESP + 0x38]         ; 004e63ea
    FST float ptr [EBP + 0xbf20]        ; 004e63ee
    FLDZ                                ; 004e63f4
    FCOMPP                              ; 004e63f6
    FNSTSW AX                           ; 004e63f8
    SAHF                                ; 004e63fa
    JNC 0x004e6405                      ; 004e63fb
        ;   XREF to: 004e6405 (CONDITIONAL_JUMP)  ; LAB_004e6405
    ADD ESP,0x20                        ; 004e63fd
        ;   Label: LAB_004e63fd
    POP EBP                             ; 004e6400
    POP EDI                             ; 004e6401
    POP ESI                             ; 004e6402
    POP EBX                             ; 004e6403
    RET                                 ; 004e6404
    PUSH 0x40000000                     ; 004e6405
        ;   Label: LAB_004e6405
    PUSH 0x3f800000                     ; 004e640a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004e640f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 004e6414
    XOR ECX,ECX                         ; 004e6418
    FLD float ptr [ESP + 0x24]          ; 004e641a
    LEA EAX,[EBP + 0x20]                ; 004e641e
    ADD ESP,0x8                         ; 004e6421
    FADD float ptr [EBP + 0xbf20]       ; 004e6424
    MOV dword ptr [ESP + 0x18],ECX      ; 004e642a
    MOV dword ptr [ESP + 0xc],EAX       ; 004e642e
    MOV dword ptr [ESP + 0x14],ECX      ; 004e6432
    FSTP float ptr [EBP + 0xbf20]       ; 004e6436
    MOV EAX,[0x006810c8]                ; 004e643c | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004e643c
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e6441
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 004e6445 | g_CDemonSetInstance.actor_count
    JGE 0x004e63fd                      ; 004e644b
        ;   XREF to: 004e63fd (CONDITIONAL_JUMP)  ; LAB_004e63fd
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e644d
    MOV EDI,dword ptr [0x03f9591c]      ; 004e6451 | g_CWayPointClassInfo.name_hash
    ADD EAX,EDX                         ; 004e6457
    PUSH EDI                            ; 004e6459
    MOV ECX,dword ptr [EAX + 0x14d158]  ; 004e645a | g_CDemonSetInstance.actors[0] | g_CDemonSetInstance.actors[1]
    PUSH ECX                            ; 004e6460
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004e6461
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e6466
    MOV EDI,EAX                         ; 004e6469
    TEST EAX,EAX                        ; 004e646b
    JNZ 0x004e6485                      ; 004e646d
        ;   XREF to: 004e6485 (CONDITIONAL_JUMP)  ; LAB_004e6485
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e646f
        ;   Label: LAB_004e646f
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e6473
    INC ESI                             ; 004e6477
    ADD EBX,0x4                         ; 004e6478
    MOV dword ptr [ESP + 0x18],ESI      ; 004e647b
    MOV dword ptr [ESP + 0x14],EBX      ; 004e647f
    JMP 0x004e643c                      ; 004e6483
        ;   XREF to: 004e643c (UNCONDITIONAL_JUMP)  ; LAB_004e643c
    PUSH 0x0                            ; 004e6485
        ;   Label: LAB_004e6485
    PUSH EAX                            ; 004e6487
    MOV EBX,dword ptr [0x0067b930]      ; 004e6488 | g_GhoulWayPointTypes
    PUSH EBX                            ; 004e648e | = "darkPoint*"
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 004e648f
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004e6494
    TEST EAX,EAX                        ; 004e6497
    JZ 0x004e646f                       ; 004e6499
        ;   XREF to: 004e646f (CONDITIONAL_JUMP)  ; LAB_004e646f
    MOV ESI,0x1                         ; 004e649b
    XOR EBX,EBX                         ; 004e64a0
    MOV dword ptr [ESP + 0x10],ESI      ; 004e64a2
    XOR ESI,ESI                         ; 004e64a6
    MOV EAX,[0x006810c8]                ; 004e64a8 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004e64a8
    CMP ESI,dword ptr [EAX + 0x150fdc]  ; 004e64ad | g_CDemonSetInstance.enemy_count
    JL 0x004e6540                       ; 004e64b3
        ;   XREF to: 004e6540 (CONDITIONAL_JUMP)  ; LAB_004e6540
    CMP dword ptr [ESP + 0x10],0x0      ; 004e64b9
    JZ 0x004e646f                       ; 004e64be
        ;   XREF to: 004e646f (CONDITIONAL_JUMP)  ; LAB_004e646f
    PUSH EDI                            ; 004e64c0
    MOV EAX,dword ptr [EDI + 0x154]     ; 004e64c1
    CALL dword ptr [EAX + 0xbc]         ; 004e64c7
    ADD ESP,0x4                         ; 004e64cd
    MOV EBX,EAX                         ; 004e64d0
    TEST EAX,EAX                        ; 004e64d2
    JZ 0x004e656c                       ; 004e64d4
        ;   XREF to: 004e656c (CONDITIONAL_JUMP)  ; LAB_004e656c
    TEST EBX,EBX                        ; 004e64da
        ;   Label: LAB_004e64da
    JNZ 0x004e6500                      ; 004e64dc
        ;   XREF to: 004e6500 (CONDITIONAL_JUMP)  ; LAB_004e6500
    MOV ESI,0x62dc21                    ; 004e64de | = "..\\core\\ghoul.cpp"
    MOV EAX,0x12c                       ; 004e64e3
    PUSH 0x62dc33                       ; 004e64e8 | = "CGhoul::findDarkWayPoint - Can't get ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004e64ed | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004e64f3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e64f8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004e64fd
    XOR EDX,EDX                         ; 004e6500
        ;   Label: LAB_004e6500
    MOV dword ptr [ESP],EDX             ; 004e6502
    MOV dword ptr [ESP + 0x4],EDX       ; 004e6505
    MOV dword ptr [ESP + 0x8],EDX       ; 004e6509
    MOV EAX,dword ptr [EBP + 0x6c]      ; 004e650d
    PUSH EAX                            ; 004e6510
    LEA EAX,[ESP + 0x4]                 ; 004e6511
    PUSH EAX                            ; 004e6515
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e6516
    PUSH EDX                            ; 004e651a
    PUSH EBX                            ; 004e651b
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 004e651c
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004e6521
    TEST EAX,EAX                        ; 004e6524
    JLE 0x004e646f                      ; 004e6526
        ;   XREF to: 004e646f (CONDITIONAL_JUMP)  ; LAB_004e646f
    MOV dword ptr [EBP + 0xbf1c],EDI    ; 004e652c
    JMP 0x004e646f                      ; 004e6532
        ;   XREF to: 004e646f (UNCONDITIONAL_JUMP)  ; LAB_004e646f
    INC ESI                             ; 004e6537
        ;   Label: LAB_004e6537
    ADD EBX,0x4                         ; 004e6538
    JMP 0x004e64a8                      ; 004e653b
        ;   XREF to: 004e64a8 (UNCONDITIONAL_JUMP)  ; LAB_004e64a8
    MOV ECX,dword ptr [0x02d832f8]      ; 004e6540 | g_CGhoulClassInfo.name_hash
        ;   Label: LAB_004e6540
    PUSH ECX                            ; 004e6546
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x150fe0] ; 004e6547 | g_CDemonSetInstance.enemies[0]
    PUSH EDX                            ; 004e654e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004e654f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e6554
    TEST EAX,EAX                        ; 004e6557
    JZ 0x004e6537                       ; 004e6559
        ;   XREF to: 004e6537 (CONDITIONAL_JUMP)  ; LAB_004e6537
    CMP EAX,EBP                         ; 004e655b
    JZ 0x004e6537                       ; 004e655d
        ;   XREF to: 004e6537 (CONDITIONAL_JUMP)  ; LAB_004e6537
    CMP EDI,dword ptr [EAX + 0xbf1c]    ; 004e655f
    JNZ 0x004e6537                      ; 004e6565
        ;   XREF to: 004e6537 (CONDITIONAL_JUMP)  ; LAB_004e6537
    JMP 0x004e646f                      ; 004e6567
        ;   XREF to: 004e646f (UNCONDITIONAL_JUMP)  ; LAB_004e646f
    LEA EAX,[EDI + 0x20]                ; 004e656c
        ;   Label: LAB_004e656c
    PUSH EAX                            ; 004e656f
    CALL core_path.cpp_getPathMap_FUN_00548500 ; 004e6570
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 004e6575
    MOV EBX,EAX                         ; 004e6578
    JMP 0x004e64da                      ; 004e657a
        ;   XREF to: 004e64da (UNCONDITIONAL_JUMP)  ; LAB_004e64da

