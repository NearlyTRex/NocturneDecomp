; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0058a320(CCharacter *param_1,CVector3f *param_2,int param_3)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_0042cbe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a320
        ;   Label: core_stranger.cpp_FUN_0058a320
    PUSH ESI                            ; 0058a321
    PUSH EDI                            ; 0058a322
    SUB ESP,0xc                         ; 0058a323
    MOV EDI,ESP                         ; 0058a326
    MOV ESI,dword ptr [ESP + 0x24]      ; 0058a328
    MOV EAX,ESP                         ; 0058a32c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0058a32e
    PUSH EAX                            ; 0058a332
    MOVSD ES:EDI,ESI                    ; 0058a333
    MOVSD ES:EDI,ESI                    ; 0058a334
    MOVSD ES:EDI,ESI                    ; 0058a335
    PUSH EBX                            ; 0058a336
    MOV ESI,dword ptr [ESP + 0x24]      ; 0058a337
    XOR EDX,EDX                         ; 0058a33b
    PUSH ESI                            ; 0058a33d
    MOV dword ptr [ESP + 0xc],EDX       ; 0058a33e
    MOV dword ptr [ESP + 0x14],EDX      ; 0058a342
    CALL core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_0042cbe0 ; 0058a346
        ;   XREF to: 0042cbe0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_0042cbe0(CCharacter * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
    ADD ESP,0xc                         ; 0058a34b
    ADD ESP,0xc                         ; 0058a34e
    POP EDI                             ; 0058a351
    POP ESI                             ; 0058a352
    POP EBX                             ; 0058a353
    RET                                 ; 0058a354

