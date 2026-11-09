; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_zombie_cpp_FUN_005ba730(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa3d4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ba730
        ;   Label: core_zombie.cpp_FUN_005ba730
    SUB ESP,0x4c                        ; 005ba731
    MOV ESI,dword ptr [ESP + 0x54]      ; 005ba734
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 005ba738
    TEST ESI,ESI                        ; 005ba740
    JNZ 0x005ba74d                      ; 005ba742
        ;   XREF to: 005ba74d (CONDITIONAL_JUMP)  ; LAB_005ba74d
    MOV EAX,dword ptr [ESP + 0x48]      ; 005ba744
    ADD ESP,0x4c                        ; 005ba748
    POP ESI                             ; 005ba74b
    RET                                 ; 005ba74c
    PUSH EDI                            ; 005ba74d
        ;   Label: LAB_005ba74d
    PUSH ESI                            ; 005ba74e
    MOV EAX,dword ptr [ESI + 0x154]     ; 005ba74f
    LEA ESI,[ESP + 0x20]                ; 005ba755
    LEA EDI,[ESP + 0x8]                 ; 005ba759
    CALL dword ptr [EAX + 0x1c]         ; 005ba75d
    MOV ECX,0x6                         ; 005ba760
    LEA ESI,[ESP + 0x20]                ; 005ba765
    ADD ESP,0x4                         ; 005ba769
    LEA EAX,[ESP + 0x4]                 ; 005ba76c
    MOVSD.REP ES:EDI,ESI                ; 005ba770
    FLD float ptr [EAX + 0xc]           ; 005ba772
    FLD float ptr [EAX + 0x10]          ; 005ba775
    FLD float ptr [EAX + 0x14]          ; 005ba778
    LEA EDI,[ESP + 0x40]                ; 005ba77b
    LEA ESI,[ESP + 0x34]                ; 005ba77f
    FXCH ST2                            ; 005ba783
    FSUB float ptr [ESP + 0x4]          ; 005ba785
    FXCH                                ; 005ba789
    FSUB float ptr [ESP + 0x8]          ; 005ba78b
    FXCH ST2                            ; 005ba78f
    FSUB float ptr [ESP + 0xc]          ; 005ba791
    FXCH                                ; 005ba795
    FSTP float ptr [ESP + 0x34]         ; 005ba797
    FXCH                                ; 005ba79b
    FSTP float ptr [ESP + 0x38]         ; 005ba79d
    FSTP float ptr [ESP + 0x3c]         ; 005ba7a1
    MOVSD ES:EDI,ESI                    ; 005ba7a5
    MOVSD ES:EDI,ESI                    ; 005ba7a6
    MOVSD ES:EDI,ESI                    ; 005ba7a7
    FLD float ptr [ESP + 0x48]          ; 005ba7a8
    FMUL double ptr [0x005fa3d4]        ; 005ba7ac | DAT_005fa3d4
    FLD1                                ; 005ba7b2
    FADDP                               ; 005ba7b4
    FSTP float ptr [ESP + 0x4c]         ; 005ba7b6
    POP EDI                             ; 005ba7ba
    MOV EAX,dword ptr [ESP + 0x48]      ; 005ba7bb
    ADD ESP,0x4c                        ; 005ba7bf
    POP ESI                             ; 005ba7c2
    RET                                 ; 005ba7c3

