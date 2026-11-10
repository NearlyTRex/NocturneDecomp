; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c819f
;
; Referenced Globals:
;   TerminatedCString s_core_ghoul_cpp_005c4174
;   TerminatedCString s_CGhoul_findDarkWayPoint_005c4186
;   undefined4 s_darkPoint_005c442c+1
;   void* PTR_s_darkPoint_005c442c+1_005fecb0 = 005c442d
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CGhoulClassInfo.name_hash
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CDemonSetInstance.enemy_count
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_main.c_FUN_004e4330
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
;   core_path.cpp_getPathMap_FUN_0050ced0
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6c80
        ;   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80
    PUSH ESI                            ; 004c6c81
    PUSH EDI                            ; 004c6c82
    PUSH EBP                            ; 004c6c83
    SUB ESP,0x20                        ; 004c6c84
    MOV EBP,dword ptr [ESP + 0x34]      ; 004c6c87
    CMP dword ptr [EBP + 0xd0bc],0x0    ; 004c6c8b
    JNZ 0x004c6cad                      ; 004c6c92
        ;   XREF to: 004c6cad (CONDITIONAL_JUMP)  ; LAB_004c6cad
    FLD float ptr [EBP + 0xd0b8]        ; 004c6c94
    FSUB float ptr [ESP + 0x38]         ; 004c6c9a
    FST float ptr [EBP + 0xd0b8]        ; 004c6c9e
    FLDZ                                ; 004c6ca4
    FCOMPP                              ; 004c6ca6
    FNSTSW AX                           ; 004c6ca8
    SAHF                                ; 004c6caa
    JNC 0x004c6cb5                      ; 004c6cab
        ;   XREF to: 004c6cb5 (CONDITIONAL_JUMP)  ; LAB_004c6cb5
    ADD ESP,0x20                        ; 004c6cad
        ;   Label: LAB_004c6cad
    POP EBP                             ; 004c6cb0
    POP EDI                             ; 004c6cb1
    POP ESI                             ; 004c6cb2
    POP EBX                             ; 004c6cb3
    RET                                 ; 004c6cb4
    PUSH 0x40000000                     ; 004c6cb5
        ;   Label: LAB_004c6cb5
    PUSH 0x3f800000                     ; 004c6cba
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004c6cbf
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 004c6cc4
    XOR ECX,ECX                         ; 004c6cc8
    FLD float ptr [ESP + 0x24]          ; 004c6cca
    LEA EAX,[EBP + 0x20]                ; 004c6cce
    ADD ESP,0x8                         ; 004c6cd1
    FADD float ptr [EBP + 0xd0b8]       ; 004c6cd4
    MOV dword ptr [ESP + 0x18],ECX      ; 004c6cda
    MOV dword ptr [ESP + 0xc],EAX       ; 004c6cde
    MOV dword ptr [ESP + 0x14],ECX      ; 004c6ce2
    FSTP float ptr [EBP + 0xd0b8]       ; 004c6ce6
    MOV EAX,[0x00603b28]                ; 004c6cec | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004c6cec
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c6cf1
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004c6cf5 | g_CDemonSetInstance.actor_count
    JGE 0x004c6cad                      ; 004c6cfb
        ;   XREF to: 004c6cad (CONDITIONAL_JUMP)  ; LAB_004c6cad
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c6cfd
    MOV EDI,dword ptr [0x02d0bcd8]      ; 004c6d01 | g_CWayPointClassInfo.name_hash
    ADD EAX,EDX                         ; 004c6d07
    PUSH EDI                            ; 004c6d09
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 004c6d0a | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004c6d10
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c6d11
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c6d16
    MOV EDI,EAX                         ; 004c6d19
    TEST EAX,EAX                        ; 004c6d1b
    JNZ 0x004c6d35                      ; 004c6d1d
        ;   XREF to: 004c6d35 (CONDITIONAL_JUMP)  ; LAB_004c6d35
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c6d1f
        ;   Label: LAB_004c6d1f
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c6d23
    INC ESI                             ; 004c6d27
    ADD EBX,0x4                         ; 004c6d28
    MOV dword ptr [ESP + 0x18],ESI      ; 004c6d2b
    MOV dword ptr [ESP + 0x14],EBX      ; 004c6d2f
    JMP 0x004c6cec                      ; 004c6d33
        ;   XREF to: 004c6cec (UNCONDITIONAL_JUMP)  ; LAB_004c6cec
    PUSH 0x0                            ; 004c6d35
        ;   Label: LAB_004c6d35
    PUSH EAX                            ; 004c6d37
    MOV EBX,dword ptr [0x005fecb0]      ; 004c6d38 | PTR_s_darkPoint_005c442c+1_005fecb0
    PUSH EBX                            ; 004c6d3e | s_darkPoint_005c442c+1
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 004c6d3f
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004c6d44
    TEST EAX,EAX                        ; 004c6d47
    JZ 0x004c6d1f                       ; 004c6d49
        ;   XREF to: 004c6d1f (CONDITIONAL_JUMP)  ; LAB_004c6d1f
    MOV ESI,0x1                         ; 004c6d4b
    XOR EBX,EBX                         ; 004c6d50
    MOV dword ptr [ESP + 0x10],ESI      ; 004c6d52
    XOR ESI,ESI                         ; 004c6d56
    MOV EAX,[0x00603b28]                ; 004c6d58 | g_CDemonSetPtr
        ;   Label: LAB_004c6d58
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 004c6d5d | g_CDemonSetInstance.enemy_count
    JL 0x004c6df0                       ; 004c6d63
        ;   XREF to: 004c6df0 (CONDITIONAL_JUMP)  ; LAB_004c6df0
    CMP dword ptr [ESP + 0x10],0x0      ; 004c6d69
    JZ 0x004c6d1f                       ; 004c6d6e
        ;   XREF to: 004c6d1f (CONDITIONAL_JUMP)  ; LAB_004c6d1f
    PUSH EDI                            ; 004c6d70
    MOV EAX,dword ptr [EDI + 0x154]     ; 004c6d71
    CALL dword ptr [EAX + 0xc4]         ; 004c6d77
    ADD ESP,0x4                         ; 004c6d7d
    MOV EBX,EAX                         ; 004c6d80
    TEST EAX,EAX                        ; 004c6d82
    JZ 0x004c6e1c                       ; 004c6d84
        ;   XREF to: 004c6e1c (CONDITIONAL_JUMP)  ; LAB_004c6e1c
    TEST EBX,EBX                        ; 004c6d8a
        ;   Label: LAB_004c6d8a
    JNZ 0x004c6db0                      ; 004c6d8c
        ;   XREF to: 004c6db0 (CONDITIONAL_JUMP)  ; LAB_004c6db0
    MOV ESI,0x5c4174                    ; 004c6d8e | = "..\\core\\ghoul.cpp"
    MOV EAX,0x12d                       ; 004c6d93
    PUSH 0x5c4186                       ; 004c6d98 | = "CGhoul::findDarkWayPoint - Can't get ..."
    MOV dword ptr [0x01d71de0],ESI      ; 004c6d9d | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004c6da3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004c6da8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004c6dad
    XOR EDX,EDX                         ; 004c6db0
        ;   Label: LAB_004c6db0
    MOV dword ptr [ESP],EDX             ; 004c6db2
    MOV dword ptr [ESP + 0x4],EDX       ; 004c6db5
    MOV dword ptr [ESP + 0x8],EDX       ; 004c6db9
    MOV EAX,dword ptr [EBP + 0x6c]      ; 004c6dbd
    PUSH EAX                            ; 004c6dc0
    LEA EAX,[ESP + 0x4]                 ; 004c6dc1
    PUSH EAX                            ; 004c6dc5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c6dc6
    PUSH EDX                            ; 004c6dca
    PUSH EBX                            ; 004c6dcb
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 ; 004c6dcc
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004c6dd1
    TEST EAX,EAX                        ; 004c6dd4
    JLE 0x004c6d1f                      ; 004c6dd6
        ;   XREF to: 004c6d1f (CONDITIONAL_JUMP)  ; LAB_004c6d1f
    MOV dword ptr [EBP + 0xd0b4],EDI    ; 004c6ddc
    JMP 0x004c6d1f                      ; 004c6de2
        ;   XREF to: 004c6d1f (UNCONDITIONAL_JUMP)  ; LAB_004c6d1f
    INC ESI                             ; 004c6de7
        ;   Label: LAB_004c6de7
    ADD EBX,0x4                         ; 004c6de8
    JMP 0x004c6d58                      ; 004c6deb
        ;   XREF to: 004c6d58 (UNCONDITIONAL_JUMP)  ; LAB_004c6d58
    MOV ECX,dword ptr [0x01d22d9c]      ; 004c6df0 | g_CGhoulClassInfo.name_hash
        ;   Label: LAB_004c6df0
    PUSH ECX                            ; 004c6df6
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x150ff0] ; 004c6df7
    PUSH EDX                            ; 004c6dfe
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c6dff
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c6e04
    TEST EAX,EAX                        ; 004c6e07
    JZ 0x004c6de7                       ; 004c6e09
        ;   XREF to: 004c6de7 (CONDITIONAL_JUMP)  ; LAB_004c6de7
    CMP EAX,EBP                         ; 004c6e0b
    JZ 0x004c6de7                       ; 004c6e0d
        ;   XREF to: 004c6de7 (CONDITIONAL_JUMP)  ; LAB_004c6de7
    CMP EDI,dword ptr [EAX + 0xd0b4]    ; 004c6e0f
    JNZ 0x004c6de7                      ; 004c6e15
        ;   XREF to: 004c6de7 (CONDITIONAL_JUMP)  ; LAB_004c6de7
    JMP 0x004c6d1f                      ; 004c6e17
        ;   XREF to: 004c6d1f (UNCONDITIONAL_JUMP)  ; LAB_004c6d1f
    LEA EAX,[EDI + 0x20]                ; 004c6e1c
        ;   Label: LAB_004c6e1c
    PUSH EAX                            ; 004c6e1f
    CALL core_path.cpp_getPathMap_FUN_0050ced0 ; 004c6e20
        ;   XREF to: 0050ced0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_0050ced0(CLocation * location)
    ADD ESP,0x4                         ; 004c6e25
    MOV EBX,EAX                         ; 004c6e28
    JMP 0x004c6d8a                      ; 004c6e2a
        ;   XREF to: 004c6d8a (UNCONDITIONAL_JUMP)  ; LAB_004c6d8a

