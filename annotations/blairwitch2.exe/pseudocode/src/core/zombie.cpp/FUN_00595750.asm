; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_00595750(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eee0a
;   undefined4 DAT_005eee12
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595750
        ;   Label: core_zombie.cpp_FUN_00595750
    PUSH EDI                            ; 00595751
    PUSH EBP                            ; 00595752
    MOV EBP,ESP                         ; 00595753
    SUB ESP,0x60                        ; 00595755
    AND ESP,0xfffffff8                  ; 00595758
    MOV EBX,ESI                         ; 0059575b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0059575d
    PUSH ESI                            ; 00595760
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00595761
    LEA ESI,[ESP + 0x1c]                ; 00595767
    LEA EDI,[ESP + 0x4]                 ; 0059576b
    CALL dword ptr [EAX + 0x24]         ; 0059576f
    MOV ECX,0x6                         ; 00595772
    LEA ESI,[ESP + 0x1c]                ; 00595777
    ADD ESP,0x4                         ; 0059577b
    MOVSD.REP ES:EDI,ESI                ; 0059577e
    FLD float ptr [ESP]                 ; 00595780
    FLD float ptr [ESP + 0x4]           ; 00595783
    FLD float ptr [ESP + 0x8]           ; 00595787
    LEA EDI,[ESP + 0x54]                ; 0059578b
    LEA ESI,[ESP + 0x30]                ; 0059578f
    FXCH ST2                            ; 00595793
    FADD float ptr [ESP + 0xc]          ; 00595795
    FXCH                                ; 00595799
    FADD float ptr [ESP + 0x10]         ; 0059579b
    FXCH ST2                            ; 0059579f
    FADD float ptr [ESP + 0x14]         ; 005957a1
    FXCH                                ; 005957a5
    FSTP float ptr [ESP + 0x30]         ; 005957a7
    FXCH                                ; 005957ab
    FSTP float ptr [ESP + 0x34]         ; 005957ad
    FSTP float ptr [ESP + 0x38]         ; 005957b1
    MOVSD ES:EDI,ESI                    ; 005957b5
    MOVSD ES:EDI,ESI                    ; 005957b6
    MOVSD ES:EDI,ESI                    ; 005957b7
    FLD float ptr [0x005eee0a]          ; 005957b8 | DAT_005eee0a
    FLD float ptr [ESP + 0x54]          ; 005957be
    FMUL ST1                            ; 005957c2
    FLD float ptr [ESP + 0x58]          ; 005957c4
    FMUL ST2                            ; 005957c8
    FLD float ptr [ESP + 0x5c]          ; 005957ca
    FMULP ST3                           ; 005957ce
    FLD float ptr [ESP + 0x8]           ; 005957d0
    LEA EDI,[ESP + 0x3c]                ; 005957d4
    LEA ESI,[ESP + 0x48]                ; 005957d8
    FXCH ST2                            ; 005957dc
    FSTP float ptr [ESP + 0x48]         ; 005957de
    FSTP float ptr [ESP + 0x4c]         ; 005957e2
    FXCH                                ; 005957e6
    FSTP float ptr [ESP + 0x50]         ; 005957e8
    MOVSD ES:EDI,ESI                    ; 005957ec
    MOVSD ES:EDI,ESI                    ; 005957ed
    MOVSD ES:EDI,ESI                    ; 005957ee
    FADD double ptr [0x005eee12]        ; 005957ef | DAT_005eee12
    LEA ESI,[ESP + 0x3c]                ; 005957f5
    MOV EDI,EBX                         ; 005957f9
    FSTP float ptr [ESP + 0x44]         ; 005957fb
    MOVSD ES:EDI,ESI                    ; 005957ff
    MOVSD ES:EDI,ESI                    ; 00595800
    MOVSD ES:EDI,ESI                    ; 00595801
    MOV EAX,EBX                         ; 00595802
    MOV ESP,EBP                         ; 00595804
    POP EBP                             ; 00595806
    POP EDI                             ; 00595807
    POP EBX                             ; 00595808
    RET                                 ; 00595809

