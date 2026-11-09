; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e0b0(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e080 at 0040e093
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e0b0
        ;   Label: core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e0b0
    PUSH ESI                            ; 0040e0b1
    PUSH EDI                            ; 0040e0b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e0b3
    PUSH EBX                            ; 0040e0b7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 0040e0b8
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e0bd
    ADD EAX,0x158                       ; 0040e0c0
    PUSH EAX                            ; 0040e0c5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0040e0c6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e0cb
    LEA EBX,[EAX + 0xfffffea8]          ; 0040e0ce
    PUSH 0x5d31bc                       ; 0040e0d4
    LEA EAX,[EBX + 0x158]               ; 0040e0d9
    PUSH EAX                            ; 0040e0df
    MOV dword ptr [EBX + 0x154],0x5fb594 ; 0040e0e0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040e0ea
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e0ef
    MOV ESI,0x5d31c8                    ; 0040e0f2
    LEA EDI,[EBX + 0x2d4]               ; 0040e0f7
    PUSH EDI                            ; 0040e0fd
    MOV AL,byte ptr [ESI]               ; 0040e0fe
        ;   Label: LAB_0040e0fe
    MOV byte ptr [EDI],AL               ; 0040e100
    CMP AL,0x0                          ; 0040e102
    JZ 0x0040e116                       ; 0040e104
        ;   XREF to: 0040e116 (CONDITIONAL_JUMP)  ; LAB_0040e116
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e106
    ADD ESI,0x2                         ; 0040e109
    MOV byte ptr [EDI + 0x1],AL         ; 0040e10c
    ADD EDI,0x2                         ; 0040e10f
    CMP AL,0x0                          ; 0040e112
    JNZ 0x0040e0fe                      ; 0040e114
        ;   XREF to: 0040e0fe (CONDITIONAL_JUMP)  ; LAB_0040e0fe
    POP EDI                             ; 0040e116
        ;   Label: LAB_0040e116
    MOV dword ptr [EBX + 0x314],0x14    ; 0040e117
    MOV dword ptr [EBX + 0x318],0x0     ; 0040e121
    MOV dword ptr [EBX + 0x31c],0x0     ; 0040e12b
    MOV dword ptr [EBX + 0x320],0x0     ; 0040e135
    MOV dword ptr [EBX + 0x324],0x0     ; 0040e13f
    MOV byte ptr [EBX + 0x328],0x0      ; 0040e149
    MOV EAX,EBX                         ; 0040e150
    MOV dword ptr [EBX + 0x348],0x0     ; 0040e152
    POP EDI                             ; 0040e15c
    POP ESI                             ; 0040e15d
    POP EBX                             ; 0040e15e
    RET                                 ; 0040e15f

