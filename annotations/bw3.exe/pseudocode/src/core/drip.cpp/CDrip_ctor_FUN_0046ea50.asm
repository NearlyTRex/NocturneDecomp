; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0046ea50(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_drip.cpp_factoryFuncDrip_FUN_0046ea20 at 0046ea33
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ea50
        ;   Label: core_drip.cpp_CDrip_ctor_FUN_0046ea50
    PUSH ESI                            ; 0046ea51
    PUSH EDI                            ; 0046ea52
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046ea53
    PUSH EBX                            ; 0046ea57
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0046ea58
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046ea5d
    ADD EAX,0x158                       ; 0046ea60
    PUSH EAX                            ; 0046ea65
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0046ea66
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046ea6b
    LEA EBX,[EAX + 0xfffffea8]          ; 0046ea6e
    PUSH 0x5bc703                       ; 0046ea74
    LEA EAX,[EBX + 0x158]               ; 0046ea79
    PUSH EAX                            ; 0046ea7f
    MOV dword ptr [EBX + 0x154],0x5ded24 ; 0046ea80
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0046ea8a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x2     ; 0046ea8f
    LEA EAX,[EBX + 0x304]               ; 0046ea99
    MOV dword ptr [EBX + 0x2d8],0x1     ; 0046ea9f
    MOV dword ptr [EAX + 0x8],0x0       ; 0046eaa9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046eab0
    MOV dword ptr [EAX + 0x4],EDX       ; 0046eab3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046eab6
    MOV dword ptr [EAX],EDX             ; 0046eab9
    MOV dword ptr [EBX + 0x2e0],0x40a00000 ; 0046eabb
    MOV dword ptr [EBX + 0x2e4],0x41200000 ; 0046eac5
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0046eacf
    MOV ESI,0x5bc70e                    ; 0046ead9
    MOV dword ptr [EBX + 0x2e8],0x0     ; 0046eade
    ADD ESP,0x8                         ; 0046eae8
    MOV dword ptr [EBX + 0x310],0x41200000 ; 0046eaeb
    LEA EDI,[EBX + 0x314]               ; 0046eaf5
    MOV dword ptr [EBX + 0x338],0x0     ; 0046eafb
    PUSH EDI                            ; 0046eb05
    MOV AL,byte ptr [ESI]               ; 0046eb06
        ;   Label: LAB_0046eb06
    MOV byte ptr [EDI],AL               ; 0046eb08
    CMP AL,0x0                          ; 0046eb0a
    JZ 0x0046eb1e                       ; 0046eb0c
        ;   XREF to: 0046eb1e (CONDITIONAL_JUMP)  ; LAB_0046eb1e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046eb0e
    ADD ESI,0x2                         ; 0046eb11
    MOV byte ptr [EDI + 0x1],AL         ; 0046eb14
    ADD EDI,0x2                         ; 0046eb17
    CMP AL,0x0                          ; 0046eb1a
    JNZ 0x0046eb06                      ; 0046eb1c
        ;   XREF to: 0046eb06 (CONDITIONAL_JUMP)  ; LAB_0046eb06
    POP EDI                             ; 0046eb1e
        ;   Label: LAB_0046eb1e
    MOV EAX,EBX                         ; 0046eb1f
    MOV dword ptr [EBX + 0x334],0x0     ; 0046eb21
    POP EDI                             ; 0046eb2b
    POP ESI                             ; 0046eb2c
    POP EBX                             ; 0046eb2d
    RET                                 ; 0046eb2e

