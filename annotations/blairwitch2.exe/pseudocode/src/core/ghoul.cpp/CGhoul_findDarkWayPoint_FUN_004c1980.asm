; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(CGhoul *this_ptr,float delta_time)
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
;   core_ghoul.cpp_FUN_004c1bb0 at 004c2e8e
;
; Referenced Globals:
;   TerminatedCString s_core_ghoul_cpp_005d8fae
;   TerminatedCString s_CGhoul_findDarkWayPoint_005d8fc0
;   undefined4 s_darkPoint_005d9266+1
;   void* PTR_s_darkPoint_005d9266+1_00616780 = 005d9267
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CGhoulClassInfo.name_hash
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;   undefined4 g_CDemonSetInstance.field1380332_0x150fec
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_0040cf60
;   core_main.c_FUN_004e4500
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1980
        ;   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980
    PUSH ESI                            ; 004c1981
    PUSH EDI                            ; 004c1982
    PUSH EBP                            ; 004c1983
    SUB ESP,0x20                        ; 004c1984
    MOV EBP,dword ptr [ESP + 0x34]      ; 004c1987
    CMP dword ptr [EBP + 0x10b60],0x0   ; 004c198b
    JNZ 0x004c19ad                      ; 004c1992
        ;   XREF to: 004c19ad (CONDITIONAL_JUMP)  ; LAB_004c19ad
    FLD float ptr [EBP + 0x10b5c]       ; 004c1994
    FSUB float ptr [ESP + 0x38]         ; 004c199a
    FST float ptr [EBP + 0x10b5c]       ; 004c199e
    FLDZ                                ; 004c19a4
    FCOMPP                              ; 004c19a6
    FNSTSW AX                           ; 004c19a8
    SAHF                                ; 004c19aa
    JNC 0x004c19b5                      ; 004c19ab
        ;   XREF to: 004c19b5 (CONDITIONAL_JUMP)  ; LAB_004c19b5
    ADD ESP,0x20                        ; 004c19ad
        ;   Label: LAB_004c19ad
    POP EBP                             ; 004c19b0
    POP EDI                             ; 004c19b1
    POP ESI                             ; 004c19b2
    POP EBX                             ; 004c19b3
    RET                                 ; 004c19b4
    PUSH 0x40000000                     ; 004c19b5
        ;   Label: LAB_004c19b5
    PUSH 0x3f800000                     ; 004c19ba
    CALL core_actor.cpp_FUN_0040cf60    ; 004c19bf
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x24],EAX      ; 004c19c4
    XOR ECX,ECX                         ; 004c19c8
    FLD float ptr [ESP + 0x24]          ; 004c19ca
    LEA EAX,[EBP + 0x20]                ; 004c19ce
    ADD ESP,0x8                         ; 004c19d1
    FADD float ptr [EBP + 0x10b5c]      ; 004c19d4
    MOV dword ptr [ESP + 0x18],ECX      ; 004c19da
    MOV dword ptr [ESP + 0xc],EAX       ; 004c19de
    MOV dword ptr [ESP + 0x14],ECX      ; 004c19e2
    FSTP float ptr [EBP + 0x10b5c]      ; 004c19e6
    MOV EAX,[0x0061b5a8]                ; 004c19ec | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004c19ec
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c19f1
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004c19f5 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x004c19ad                      ; 004c19fb
        ;   XREF to: 004c19ad (CONDITIONAL_JUMP)  ; LAB_004c19ad
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c19fd
    MOV EDI,dword ptr [0x02661adc]      ; 004c1a01 | g_CWayPointClassInfo.name_hash
    ADD EAX,EDX                         ; 004c1a07
    PUSH EDI                            ; 004c1a09
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 004c1a0a | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ECX                            ; 004c1a10
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004c1a11
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004c1a16
    MOV EDI,EAX                         ; 004c1a19
    TEST EAX,EAX                        ; 004c1a1b
    JNZ 0x004c1a35                      ; 004c1a1d
        ;   XREF to: 004c1a35 (CONDITIONAL_JUMP)  ; LAB_004c1a35
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c1a1f
        ;   Label: LAB_004c1a1f
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c1a23
    INC ESI                             ; 004c1a27
    ADD EBX,0x4                         ; 004c1a28
    MOV dword ptr [ESP + 0x18],ESI      ; 004c1a2b
    MOV dword ptr [ESP + 0x14],EBX      ; 004c1a2f
    JMP 0x004c19ec                      ; 004c1a33
        ;   XREF to: 004c19ec (UNCONDITIONAL_JUMP)  ; LAB_004c19ec
    PUSH 0x0                            ; 004c1a35
        ;   Label: LAB_004c1a35
    PUSH EAX                            ; 004c1a37
    MOV EBX,dword ptr [0x00616780]      ; 004c1a38 | PTR_s_darkPoint_005d9266+1_00616780
    PUSH EBX                            ; 004c1a3e | s_darkPoint_005d9266+1
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 004c1a3f
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004c1a44
    TEST EAX,EAX                        ; 004c1a47
    JZ 0x004c1a1f                       ; 004c1a49
        ;   XREF to: 004c1a1f (CONDITIONAL_JUMP)  ; LAB_004c1a1f
    MOV ESI,0x1                         ; 004c1a4b
    XOR EBX,EBX                         ; 004c1a50
    MOV dword ptr [ESP + 0x10],ESI      ; 004c1a52
    XOR ESI,ESI                         ; 004c1a56
    MOV EAX,[0x0061b5a8]                ; 004c1a58 | g_CDemonSetPtr
        ;   Label: LAB_004c1a58
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 004c1a5d | g_CDemonSetInstance.field1380332_0x150fec
    JL 0x004c1af0                       ; 004c1a63
        ;   XREF to: 004c1af0 (CONDITIONAL_JUMP)  ; LAB_004c1af0
    CMP dword ptr [ESP + 0x10],0x0      ; 004c1a69
    JZ 0x004c1a1f                       ; 004c1a6e
        ;   XREF to: 004c1a1f (CONDITIONAL_JUMP)  ; LAB_004c1a1f
    PUSH EDI                            ; 004c1a70
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 004c1a71
    CALL dword ptr [EAX + 0xcc]         ; 004c1a77
    ADD ESP,0x4                         ; 004c1a7d
    MOV EBX,EAX                         ; 004c1a80
    TEST EAX,EAX                        ; 004c1a82
    JZ 0x004c1b1c                       ; 004c1a84
        ;   XREF to: 004c1b1c (CONDITIONAL_JUMP)  ; LAB_004c1b1c
    TEST EBX,EBX                        ; 004c1a8a
        ;   Label: LAB_004c1a8a
    JNZ 0x004c1ab0                      ; 004c1a8c
        ;   XREF to: 004c1ab0 (CONDITIONAL_JUMP)  ; LAB_004c1ab0
    MOV ESI,0x5d8fae                    ; 004c1a8e | = "..\\core\\ghoul.cpp"
    MOV EAX,0x12d                       ; 004c1a93
    PUSH 0x5d8fc0                       ; 004c1a98 | = "CGhoul::findDarkWayPoint - Can't get ..."
    MOV dword ptr [0x01d046a0],ESI      ; 004c1a9d | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004c1aa3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004c1aa8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004c1aad
    XOR EDX,EDX                         ; 004c1ab0
        ;   Label: LAB_004c1ab0
    MOV dword ptr [ESP],EDX             ; 004c1ab2
    MOV dword ptr [ESP + 0x4],EDX       ; 004c1ab5
    MOV dword ptr [ESP + 0x8],EDX       ; 004c1ab9
    MOV EAX,dword ptr [EBP + 0x6c]      ; 004c1abd
    PUSH EAX                            ; 004c1ac0
    LEA EAX,[ESP + 0x4]                 ; 004c1ac1
    PUSH EAX                            ; 004c1ac5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c1ac6
    PUSH EDX                            ; 004c1aca
    PUSH EBX                            ; 004c1acb
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004c1acc
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004c1ad1
    TEST EAX,EAX                        ; 004c1ad4
    JLE 0x004c1a1f                      ; 004c1ad6
        ;   XREF to: 004c1a1f (CONDITIONAL_JUMP)  ; LAB_004c1a1f
    MOV dword ptr [EBP + 0x10b58],EDI   ; 004c1adc
    JMP 0x004c1a1f                      ; 004c1ae2
        ;   XREF to: 004c1a1f (UNCONDITIONAL_JUMP)  ; LAB_004c1a1f
    INC ESI                             ; 004c1ae7
        ;   Label: LAB_004c1ae7
    ADD EBX,0x4                         ; 004c1ae8
    JMP 0x004c1a58                      ; 004c1aeb
        ;   XREF to: 004c1a58 (UNCONDITIONAL_JUMP)  ; LAB_004c1a58
    MOV ECX,dword ptr [0x01cb8218]      ; 004c1af0 | g_CGhoulClassInfo.name_hash
        ;   Label: LAB_004c1af0
    PUSH ECX                            ; 004c1af6
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x150ff0] ; 004c1af7
    PUSH EDX                            ; 004c1afe
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004c1aff
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004c1b04
    TEST EAX,EAX                        ; 004c1b07
    JZ 0x004c1ae7                       ; 004c1b09
        ;   XREF to: 004c1ae7 (CONDITIONAL_JUMP)  ; LAB_004c1ae7
    CMP EAX,EBP                         ; 004c1b0b
    JZ 0x004c1ae7                       ; 004c1b0d
        ;   XREF to: 004c1ae7 (CONDITIONAL_JUMP)  ; LAB_004c1ae7
    CMP EDI,dword ptr [EAX + 0x10b58]   ; 004c1b0f
    JNZ 0x004c1ae7                      ; 004c1b15
        ;   XREF to: 004c1ae7 (CONDITIONAL_JUMP)  ; LAB_004c1ae7
    JMP 0x004c1a1f                      ; 004c1b17
        ;   XREF to: 004c1a1f (UNCONDITIONAL_JUMP)  ; LAB_004c1a1f
    LEA EAX,[EDI + 0x20]                ; 004c1b1c
        ;   Label: LAB_004c1b1c
    PUSH EAX                            ; 004c1b1f
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 004c1b20
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 004c1b25
    MOV EBX,EAX                         ; 004c1b28
    JMP 0x004c1a8a                      ; 004c1b2a
        ;   XREF to: 004c1a8a (UNCONDITIONAL_JUMP)  ; LAB_004c1a8a

