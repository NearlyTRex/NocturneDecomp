; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004e4910(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 at 004e5cfa
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_0062908c
;   undefined4 DAT_00629090
;   undefined4 DAT_006290bc
;   undefined4 DAT_006290c0
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01cd0e44
;   undefined4 DAT_01cd0e58
;   undefined4 DAT_01cd0e5c
;   undefined4 DAT_01cd0e60
;   undefined4 DAT_01cd0e64
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4910
        ;   Label: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004e4910
    PUSH ESI                            ; 004e4911
    PUSH EDI                            ; 004e4912
    PUSH EBP                            ; 004e4913
    MOV EDX,0x4                         ; 004e4914
    MOV EBX,0x1                         ; 004e4919
    MOV ESI,0x2                         ; 004e491e
    MOV EDI,0x3                         ; 004e4923
    MOV EBP,0x80000                     ; 004e4928
    MOV EAX,0xf80000                    ; 004e492d
    PUSH 0xffff                         ; 004e4932
    XOR ECX,ECX                         ; 004e4937
    MOV dword ptr [0x01cd0e44],EDX      ; 004e4939 | DAT_01cd0e44
    MOV dword ptr [0x01cd0e58],ECX      ; 004e493f | DAT_01cd0e58
    MOV dword ptr [0x01cd0e5c],EBX      ; 004e4945 | DAT_01cd0e5c
    MOV dword ptr [0x01cd0e60],ESI      ; 004e494b | DAT_01cd0e60
    MOV dword ptr [0x01cd0e64],EDI      ; 004e4951 | DAT_01cd0e64
    MOV dword ptr [0x0062902c],EBP      ; 004e4957 | DAT_0062902c
    MOV [0x00629030],EAX                ; 004e495d | DAT_00629030
    MOV [0x0062905c],EAX                ; 004e4962 | DAT_0062905c
    MOV [0x00629060],EAX                ; 004e4967 | DAT_00629060
    MOV [0x0062908c],EAX                ; 004e496c | DAT_0062908c
    MOV EAX,[0x00612560]                ; 004e4971 | DAT_00612560
    MOV dword ptr [0x00629090],EBP      ; 004e4976 | DAT_00629090
    PUSH EAX                            ; 004e497c | DAT_01bc120c
    MOV dword ptr [0x006290bc],EBP      ; 004e497d | DAT_006290bc
    MOV dword ptr [0x006290c0],EBP      ; 004e4983 | DAT_006290c0
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e4989
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e498e
    POP EBP                             ; 004e4991
    POP EDI                             ; 004e4992
    POP ESI                             ; 004e4993
    POP EBX                             ; 004e4994
    RET                                 ; 004e4995

