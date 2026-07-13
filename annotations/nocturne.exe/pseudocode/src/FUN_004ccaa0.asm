; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ccaa0(uint param_1)
;
;
; XREF[5]:
;   FUN_00404b10 at 00404be7
;   FUN_004c0b40 at 004c0c1c
;   FUN_004c59e0 at 004c5b09
;   FUN_004ccdc0 at 004ccddb
;   FUN_004cd380 at 004cd4e9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccaa0
        ;   Label: FUN_004ccaa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ccaa1
    MOV EAX,EBX                         ; 004ccaa5
    SAR EAX,0x8                         ; 004ccaa7
    AND EAX,0xff                        ; 004ccaaa
    MOV ECX,dword ptr [EAX*0x4 + 0x1cc4d14] ; 004ccaaf
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc4d18] ; 004ccab6
    AND EBX,0xff                        ; 004ccabd
    SUB EDX,ECX                         ; 004ccac3
    IMUL EDX,EBX                        ; 004ccac5
    MOV EAX,EDX                         ; 004ccac8
    SAR EDX,0x1f                        ; 004ccaca
    SHL EDX,0x8                         ; 004ccacd
    SBB EAX,EDX                         ; 004ccad0
    SAR EAX,0x8                         ; 004ccad2
    ADD EAX,ECX                         ; 004ccad5
    POP EBX                             ; 004ccad7
    RET                                 ; 004ccad8

