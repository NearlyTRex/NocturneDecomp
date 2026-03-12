; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CVector3f        Stack[-0x48]:12  CStack_48
; CVector3f *      Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; CCharacter *     Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  fStack_30
; int              Stack[-0x2c]:4  local_2c
; CLocation *      Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; CCharacter *     Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Capture_006243ba
;   float FLOAT_0065d7c8 = NaN
;   CEventList* g_CEventListPtr = 02d05310
;   CGame* g_CGamePtr = 02d81a9c
;   CEventList g_CEventListInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c70
;   undefined4 DAT_02d81ccc
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9b00
        ;   Label: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
    PUSH ESI                            ; 004a9b01
    PUSH EDI                            ; 004a9b02
    PUSH EBP                            ; 004a9b03
    MOV EBP,ESP                         ; 004a9b04
    SUB ESP,0x48                        ; 004a9b06
    AND ESP,0xfffffff8                  ; 004a9b09
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a9b0c
    MOV EAX,dword ptr [EDI + 0xbeb0]    ; 004a9b0f
    MOV EDX,dword ptr [EDI + 0xbeb4]    ; 004a9b15
    MOV dword ptr [ESP],EAX             ; 004a9b1b
    TEST EDX,EDX                        ; 004a9b1e
    JZ 0x004a9b57                       ; 004a9b20
        ;   XREF to: 004a9b57 (CONDITIONAL_JUMP)  ; LAB_004a9b57
    CMP EDX,dword ptr [0x0065d7c8]      ; 004a9b22 | FLOAT_0065d7c8
    JNZ 0x004a9b4f                      ; 004a9b28
        ;   XREF to: 004a9b4f (CONDITIONAL_JUMP)  ; LAB_004a9b4f
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9b2a
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9b34
        ;   Label: LAB_004a9b34
    MOV dword ptr [EDI + 0xbe40],0x0    ; 004a9b3e
    MOV ESP,EBP                         ; 004a9b48
        ;   Label: LAB_004a9b48
    POP EBP                             ; 004a9b4a
    POP EDI                             ; 004a9b4b
    POP ESI                             ; 004a9b4c
    POP EBX                             ; 004a9b4d
    RET                                 ; 004a9b4e
    MOV dword ptr [EDI + 0xbe3c],EDX    ; 004a9b4f
        ;   Label: LAB_004a9b4f
    JMP 0x004a9b34                      ; 004a9b55
        ;   XREF to: 004a9b34 (UNCONDITIONAL_JUMP)  ; LAB_004a9b34
    MOV EAX,[0x0067b654]                ; 004a9b57 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004a9b57
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004a9b5c | DAT_02d81c70
    JNZ 0x004a9b6e                      ; 004a9b63
        ;   XREF to: 004a9b6e (CONDITIONAL_JUMP)  ; LAB_004a9b6e
    CMP dword ptr [EAX + 0x230],0x0     ; 004a9b65 | DAT_02d81ccc
    JNZ 0x004a9b93                      ; 004a9b6c
        ;   XREF to: 004a9b93 (CONDITIONAL_JUMP)  ; LAB_004a9b93
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9b6e
        ;   Label: LAB_004a9b6e
    MOV dword ptr [EDI + 0xbe40],0x0    ; 004a9b78
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9b82
    MOV ESP,EBP                         ; 004a9b8c
    POP EBP                             ; 004a9b8e
    POP EDI                             ; 004a9b8f
    POP ESI                             ; 004a9b90
    POP EBX                             ; 004a9b91
    RET                                 ; 004a9b92
    PUSH 0x6243ba                       ; 004a9b93 | = "Capture"
        ;   Label: LAB_004a9b93
    MOV ESI,dword ptr [0x006793d0]      ; 004a9b98 | g_CEventListPtr
    PUSH ESI                            ; 004a9b9e | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004a9b9f
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a9ba4
    TEST EAX,EAX                        ; 004a9ba7
    JNZ 0x004a9b6e                      ; 004a9ba9
        ;   XREF to: 004a9b6e (CONDITIONAL_JUMP)  ; LAB_004a9b6e
    FLD float ptr [EDI + 0xbe40]        ; 004a9bab
    FSUB float ptr [EBP + 0x18]         ; 004a9bb1
    FST float ptr [EDI + 0xbe40]        ; 004a9bb4
    FLDZ                                ; 004a9bba
    FCOMPP                              ; 004a9bbc
    FNSTSW AX                           ; 004a9bbe
    SAHF                                ; 004a9bc0
    JNC 0x004a9c0e                      ; 004a9bc1
        ;   XREF to: 004a9c0e (CONDITIONAL_JUMP)  ; LAB_004a9c0e
    MOV EBX,dword ptr [EDI + 0xbe3c]    ; 004a9bc3
    TEST EBX,EBX                        ; 004a9bc9
    JZ 0x004a9b48                       ; 004a9bcb
        ;   XREF to: 004a9b48 (CONDITIONAL_JUMP)  ; LAB_004a9b48
    PUSH EBX                            ; 004a9bd1
    MOV EDX,dword ptr [EBX + 0x154]     ; 004a9bd2
    CALL dword ptr [EDX + 0x120]        ; 004a9bd8
    ADD ESP,0x4                         ; 004a9bde
    TEST EAX,EAX                        ; 004a9be1
    JZ 0x004a9b48                       ; 004a9be3
        ;   XREF to: 004a9b48 (CONDITIONAL_JUMP)  ; LAB_004a9b48
    MOV dword ptr [EDI + 0xbe40],0x0    ; 004a9be9
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9bf3
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9bfd
    MOV ESP,EBP                         ; 004a9c07
    POP EBP                             ; 004a9c09
    POP EDI                             ; 004a9c0a
    POP ESI                             ; 004a9c0b
    POP EBX                             ; 004a9c0c
    RET                                 ; 004a9c0d
    PUSH 0x3fc00000                     ; 004a9c0e
        ;   Label: LAB_004a9c0e
    PUSH 0x3f000000                     ; 004a9c13
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9c18
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a9c22
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

