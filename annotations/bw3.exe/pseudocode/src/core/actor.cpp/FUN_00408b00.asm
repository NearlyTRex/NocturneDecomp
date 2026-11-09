; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408b00(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[60]:
;   core_actor.cpp_FUN_00408f00 at 00408f96
;   core_actor.cpp_FUN_004091b0 at 004093fb
;   core_actor.cpp_FUN_00409f60 at 0040a03a
;   core_blundrbs.cpp_FUN_00410490 at 004105e2
;   core_bodypart.cpp_FUN_004157c0 at 00415a5b
;   core_boxactor.cpp_FUN_0041f360 at 0041f702
;   core_burncrss.cpp_FUN_00424550 at 00424645
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 at 0042bc04
;   core_charactr.cpp_FUN_0042c230 at 0042c298
;   core_charactr.cpp_FUN_0042fc90 at 0042fd8e
;   ... and 50 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b00
        ;   Label: core_actor.cpp_FUN_00408b00
    PUSH EDI                            ; 00408b01
    SUB ESP,0xc                         ; 00408b02
    MOV EBX,ESI                         ; 00408b05
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408b07
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408b0b
    PUSH EDX                            ; 00408b0f
    ADD ESI,0x3c                        ; 00408b10
    PUSH ESI                            ; 00408b13
    LEA ESI,[ESP + 0x8]                 ; 00408b14
    MOV EDI,EBX                         ; 00408b18
    CALL core_dirmat.cpp_FUN_0045b800   ; 00408b1a
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x8]                 ; 00408b1f
    ADD ESP,0x8                         ; 00408b23
    MOVSD ES:EDI,ESI                    ; 00408b26
    MOVSD ES:EDI,ESI                    ; 00408b27
    MOVSD ES:EDI,ESI                    ; 00408b28
    MOV EAX,EBX                         ; 00408b29
    ADD ESP,0xc                         ; 00408b2b
    POP EDI                             ; 00408b2e
    POP EBX                             ; 00408b2f
    RET                                 ; 00408b30

