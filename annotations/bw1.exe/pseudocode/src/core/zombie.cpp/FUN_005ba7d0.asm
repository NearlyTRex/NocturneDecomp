; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005ba7d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa3dc
;   undefined4 DAT_005fa3e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba7d0
        ;   Label: core_zombie.cpp_FUN_005ba7d0
    PUSH EDI                            ; 005ba7d1
    PUSH EBP                            ; 005ba7d2
    MOV EBP,ESP                         ; 005ba7d3
    SUB ESP,0x60                        ; 005ba7d5
    AND ESP,0xfffffff8                  ; 005ba7d8
    MOV EBX,ESI                         ; 005ba7db
    MOV ESI,dword ptr [EBP + 0x10]      ; 005ba7dd
    PUSH ESI                            ; 005ba7e0
    MOV EAX,dword ptr [ESI + 0x154]     ; 005ba7e1
    LEA ESI,[ESP + 0x1c]                ; 005ba7e7
    LEA EDI,[ESP + 0x4]                 ; 005ba7eb
    CALL dword ptr [EAX + 0x1c]         ; 005ba7ef
    MOV ECX,0x6                         ; 005ba7f2
    LEA ESI,[ESP + 0x1c]                ; 005ba7f7
    ADD ESP,0x4                         ; 005ba7fb
    MOVSD.REP ES:EDI,ESI                ; 005ba7fe
    FLD float ptr [ESP]                 ; 005ba800
    FLD float ptr [ESP + 0x4]           ; 005ba803
    FLD float ptr [ESP + 0x8]           ; 005ba807
    LEA EDI,[ESP + 0x54]                ; 005ba80b
    LEA ESI,[ESP + 0x30]                ; 005ba80f
    FXCH ST2                            ; 005ba813
    FADD float ptr [ESP + 0xc]          ; 005ba815
    FXCH                                ; 005ba819
    FADD float ptr [ESP + 0x10]         ; 005ba81b
    FXCH ST2                            ; 005ba81f
    FADD float ptr [ESP + 0x14]         ; 005ba821
    FXCH                                ; 005ba825
    FSTP float ptr [ESP + 0x30]         ; 005ba827
    FXCH                                ; 005ba82b
    FSTP float ptr [ESP + 0x34]         ; 005ba82d
    FSTP float ptr [ESP + 0x38]         ; 005ba831
    MOVSD ES:EDI,ESI                    ; 005ba835
    MOVSD ES:EDI,ESI                    ; 005ba836
    MOVSD ES:EDI,ESI                    ; 005ba837
    FLD float ptr [0x005fa3dc]          ; 005ba838 | DAT_005fa3dc
    FLD float ptr [ESP + 0x54]          ; 005ba83e
    FMUL ST1                            ; 005ba842
    FLD float ptr [ESP + 0x58]          ; 005ba844
    FMUL ST2                            ; 005ba848
    FLD float ptr [ESP + 0x5c]          ; 005ba84a
    FMULP ST3                           ; 005ba84e
    FLD float ptr [ESP + 0x8]           ; 005ba850
    LEA EDI,[ESP + 0x3c]                ; 005ba854
    LEA ESI,[ESP + 0x48]                ; 005ba858
    FXCH ST2                            ; 005ba85c
    FSTP float ptr [ESP + 0x48]         ; 005ba85e
    FSTP float ptr [ESP + 0x4c]         ; 005ba862
    FXCH                                ; 005ba866
    FSTP float ptr [ESP + 0x50]         ; 005ba868
    MOVSD ES:EDI,ESI                    ; 005ba86c
    MOVSD ES:EDI,ESI                    ; 005ba86d
    MOVSD ES:EDI,ESI                    ; 005ba86e
    FADD double ptr [0x005fa3e4]        ; 005ba86f | DAT_005fa3e4
    LEA ESI,[ESP + 0x3c]                ; 005ba875
    MOV EDI,EBX                         ; 005ba879
    FSTP float ptr [ESP + 0x44]         ; 005ba87b
    MOVSD ES:EDI,ESI                    ; 005ba87f
    MOVSD ES:EDI,ESI                    ; 005ba880
    MOVSD ES:EDI,ESI                    ; 005ba881
    MOV EAX,EBX                         ; 005ba882
    MOV ESP,EBP                         ; 005ba884
    POP EBP                             ; 005ba886
    POP EDI                             ; 005ba887
    POP EBX                             ; 005ba888
    RET                                 ; 005ba889

