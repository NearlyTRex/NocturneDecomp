; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004b15d0(void)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004b4dd0 at 004b4de6
;
; Referenced Globals:
;   undefined4 DAT_01c43530
;   undefined4 DAT_01c57e14
;   undefined4 DAT_01c57e18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b15d0
        ;   Label: core_fire.cpp_updateTextureAnimCounts_FUN_004b15d0
    PUSH ESI                            ; 004b15d1
    MOV ECX,dword ptr [0x01c43530]      ; 004b15d2 | DAT_01c43530
    MOV EBX,dword ptr [0x01c57e18]      ; 004b15d8 | DAT_01c57e18
    MOV ESI,dword ptr [0x01c57e14]      ; 004b15de | DAT_01c57e14
    MOV EDX,ECX                         ; 004b15e4
    MOV EAX,ECX                         ; 004b15e6
    SAR EDX,0x1f                        ; 004b15e8
    SHL EDX,0x8                         ; 004b15eb
    SBB EAX,EDX                         ; 004b15ee
    SAR EAX,0x8                         ; 004b15f0
    MOV EDX,ECX                         ; 004b15f3
    ADD EBX,EAX                         ; 004b15f5
    MOV EAX,ECX                         ; 004b15f7
    SAR EDX,0x1f                        ; 004b15f9
    SHL EDX,0x7                         ; 004b15fc
    SBB EAX,EDX                         ; 004b15ff
    SAR EAX,0x7                         ; 004b1601
    ADD ESI,EAX                         ; 004b1604
    AND EBX,0xff                        ; 004b1606
    AND ESI,0x7f                        ; 004b160c
    MOV dword ptr [0x01c57e18],EBX      ; 004b160f | DAT_01c57e18
    MOV dword ptr [0x01c57e14],ESI      ; 004b1615 | DAT_01c57e14
    POP ESI                             ; 004b161b
    POP EBX                             ; 004b161c
    RET                                 ; 004b161d

