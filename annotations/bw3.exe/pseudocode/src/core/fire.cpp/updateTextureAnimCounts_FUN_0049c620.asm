; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_0049c620(void)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1760 at 004a1776
;
; Referenced Globals:
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01c743f4
;   undefined4 DAT_01c743f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c620
        ;   Label: core_fire.cpp_updateTextureAnimCounts_FUN_0049c620
    PUSH ESI                            ; 0049c621
    MOV ECX,dword ptr [0x01c5fad0]      ; 0049c622 | DAT_01c5fad0
    MOV EBX,dword ptr [0x01c743f8]      ; 0049c628 | DAT_01c743f8
    MOV ESI,dword ptr [0x01c743f4]      ; 0049c62e | DAT_01c743f4
    MOV EDX,ECX                         ; 0049c634
    MOV EAX,ECX                         ; 0049c636
    SAR EDX,0x1f                        ; 0049c638
    SHL EDX,0x8                         ; 0049c63b
    SBB EAX,EDX                         ; 0049c63e
    SAR EAX,0x8                         ; 0049c640
    MOV EDX,ECX                         ; 0049c643
    ADD EBX,EAX                         ; 0049c645
    MOV EAX,ECX                         ; 0049c647
    SAR EDX,0x1f                        ; 0049c649
    SHL EDX,0x7                         ; 0049c64c
    SBB EAX,EDX                         ; 0049c64f
    SAR EAX,0x7                         ; 0049c651
    ADD ESI,EAX                         ; 0049c654
    AND EBX,0xff                        ; 0049c656
    AND ESI,0x7f                        ; 0049c65c
    MOV dword ptr [0x01c743f8],EBX      ; 0049c65f | DAT_01c743f8
    MOV dword ptr [0x01c743f4],ESI      ; 0049c665 | DAT_01c743f4
    POP ESI                             ; 0049c66b
    POP EBX                             ; 0049c66c
    RET                                 ; 0049c66d

