; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_00410b50(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bat.cpp_factoryFuncBat_FUN_00410b20 at 00410b33
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_course.cpp_CCourse_ctor_FUN_00447d10
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410b50
        ;   Label: core_bat.cpp_CBat_ctor_FUN_00410b50
    PUSH ESI                            ; 00410b51
    PUSH EDI                            ; 00410b52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410b53
    PUSH EBX                            ; 00410b57
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00410b58
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410b5d
    ADD EAX,0x178                       ; 00410b60
    PUSH EAX                            ; 00410b65
    CALL core_course.cpp_CCourse_ctor_FUN_00447d10 ; 00410b66
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00447d10(CCourse * this_ptr)
    ADD ESP,0x4                         ; 00410b6b
    ADD EAX,0x10                        ; 00410b6e
    PUSH EAX                            ; 00410b71
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00410b72
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xfffffe78]          ; 00410b77
    MOV dword ptr [EBX + 0x154],0x5fbeb4 ; 00410b7d
    MOV dword ptr [EBX + 0x184],0x0     ; 00410b87
    MOV dword ptr [EBX + 0x304],0x0     ; 00410b91
    MOV ESI,0x5d35c6                    ; 00410b9b
    MOV dword ptr [EBX + 0x308],0x41f00000 ; 00410ba0
    ADD ESP,0x4                         ; 00410baa
    MOV dword ptr [EBX + 0x30c],0x3f800000 ; 00410bad
    LEA EDI,[EBX + 0x158]               ; 00410bb7
    MOV dword ptr [EBX + 0x310],0x41f00000 ; 00410bbd
    PUSH EDI                            ; 00410bc7
    MOV AL,byte ptr [ESI]               ; 00410bc8
        ;   Label: LAB_00410bc8
    MOV byte ptr [EDI],AL               ; 00410bca
    CMP AL,0x0                          ; 00410bcc
    JZ 0x00410be0                       ; 00410bce
        ;   XREF to: 00410be0 (CONDITIONAL_JUMP)  ; LAB_00410be0
    MOV AL,byte ptr [ESI + 0x1]         ; 00410bd0
    ADD ESI,0x2                         ; 00410bd3
    MOV byte ptr [EDI + 0x1],AL         ; 00410bd6
    ADD EDI,0x2                         ; 00410bd9
    CMP AL,0x0                          ; 00410bdc
    JNZ 0x00410bc8                      ; 00410bde
        ;   XREF to: 00410bc8 (CONDITIONAL_JUMP)  ; LAB_00410bc8
    POP EDI                             ; 00410be0
        ;   Label: LAB_00410be0
    PUSH 0x5d35d2                       ; 00410be1
    LEA EAX,[EBX + 0x188]               ; 00410be6
    PUSH EAX                            ; 00410bec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00410bed
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x314],0x0      ; 00410bf2
    MOV dword ptr [EBX + 0x378],0x41700000 ; 00410bf9
    ADD ESP,0x8                         ; 00410c03
    MOV dword ptr [EBX + 0x37c],0x41f00000 ; 00410c06
    MOV EAX,EBX                         ; 00410c10
    MOV dword ptr [EBX + 0x384],0x0     ; 00410c12
    POP EDI                             ; 00410c1c
    POP ESI                             ; 00410c1d
    POP EBX                             ; 00410c1e
    RET                                 ; 00410c1f

