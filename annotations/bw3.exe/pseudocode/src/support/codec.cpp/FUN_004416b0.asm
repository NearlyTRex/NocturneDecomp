; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_004416b0(int param_1,uint param_2)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00441660 at 0044168b
;
; Called Functions:
;   support_codec.cpp_FUN_004417d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004416b0
        ;   Label: support_codec.cpp_FUN_004416b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004416b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004416b5
    AND EAX,0xffffff                    ; 004416b9
    PUSH EBX                            ; 004416be
    MOV dword ptr [EBX + 0x8],EAX       ; 004416bf
    CALL support_codec.cpp_FUN_004417d0 ; 004416c2
        ;   XREF to: 004417d0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004417d0()
    ADD ESP,0x4                         ; 004416c7
    PUSH EBX                            ; 004416ca
    CALL support_codec.cpp_FUN_004417d0 ; 004416cb
        ;   XREF to: 004417d0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004417d0()
    ADD ESP,0x4                         ; 004416d0
    POP EBX                             ; 004416d3
    RET                                 ; 004416d4

