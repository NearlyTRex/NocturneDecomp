; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_004a08b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dcb62
;   undefined4 DAT_005dcb6a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a08b0
        ;   Label: core_enemy.cpp_FUN_004a08b0
    PUSH EDI                            ; 004a08b1
    PUSH EBP                            ; 004a08b2
    MOV EBP,ESP                         ; 004a08b3
    SUB ESP,0x60                        ; 004a08b5
    AND ESP,0xfffffff8                  ; 004a08b8
    MOV EBX,ESI                         ; 004a08bb
    MOV ESI,dword ptr [EBP + 0x10]      ; 004a08bd
    PUSH ESI                            ; 004a08c0
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a08c1
    LEA ESI,[ESP + 0x4]                 ; 004a08c7
    LEA EDI,[ESP + 0x1c]                ; 004a08cb
    CALL dword ptr [EAX + 0x1c]         ; 004a08cf
    MOV ECX,0x6                         ; 004a08d2
    LEA ESI,[ESP + 0x4]                 ; 004a08d7
    ADD ESP,0x4                         ; 004a08db
    MOVSD.REP ES:EDI,ESI                ; 004a08de
    FLD float ptr [ESP + 0x28]          ; 004a08e0
    FSUB float ptr [ESP + 0x1c]         ; 004a08e4
    FMUL double ptr [0x005dcb6a]        ; 004a08e8 | DAT_005dcb6a
    FLD float ptr [ESP + 0x18]          ; 004a08ee
    FLD float ptr [ESP + 0x1c]          ; 004a08f2
    FLD float ptr [ESP + 0x20]          ; 004a08f6
    LEA EDI,[ESP + 0x48]                ; 004a08fa
    LEA ESI,[ESP + 0x54]                ; 004a08fe
    FXCH ST2                            ; 004a0902
    FADD float ptr [ESP + 0x24]         ; 004a0904
    FXCH                                ; 004a0908
    FADD float ptr [ESP + 0x28]         ; 004a090a
    FXCH ST2                            ; 004a090e
    FADD float ptr [ESP + 0x2c]         ; 004a0910
    FXCH                                ; 004a0914
    FSTP float ptr [ESP + 0x54]         ; 004a0916
    FXCH                                ; 004a091a
    FSTP float ptr [ESP + 0x58]         ; 004a091c
    FSTP float ptr [ESP + 0x5c]         ; 004a0920
    MOVSD ES:EDI,ESI                    ; 004a0924
    MOVSD ES:EDI,ESI                    ; 004a0925
    MOVSD ES:EDI,ESI                    ; 004a0926
    FLD float ptr [0x005dcb62]          ; 004a0927 | DAT_005dcb62
    FLD float ptr [ESP + 0x48]          ; 004a092d
    FMUL ST1                            ; 004a0931
    FLD float ptr [ESP + 0x4c]          ; 004a0933
    FMUL ST2                            ; 004a0937
    FLD float ptr [ESP + 0x50]          ; 004a0939
    FMULP ST3                           ; 004a093d
    FLD float ptr [ESP + 0x28]          ; 004a093f
    LEA EDI,[ESP + 0x30]                ; 004a0943
    LEA ESI,[ESP + 0x3c]                ; 004a0947
    FXCH ST2                            ; 004a094b
    FSTP float ptr [ESP + 0x3c]         ; 004a094d
    FSTP float ptr [ESP + 0x40]         ; 004a0951
    FXCH                                ; 004a0955
    FSTP float ptr [ESP + 0x44]         ; 004a0957
    MOVSD ES:EDI,ESI                    ; 004a095b
    MOVSD ES:EDI,ESI                    ; 004a095c
    MOVSD ES:EDI,ESI                    ; 004a095d
    FSUBRP                              ; 004a095e
    LEA ESI,[ESP + 0x30]                ; 004a0960
    MOV EDI,EBX                         ; 004a0964
    FSTP float ptr [ESP + 0x34]         ; 004a0966
    MOVSD ES:EDI,ESI                    ; 004a096a
    MOVSD ES:EDI,ESI                    ; 004a096b
    MOVSD ES:EDI,ESI                    ; 004a096c
    MOV EAX,EBX                         ; 004a096d
    MOV ESP,EBP                         ; 004a096f
    POP EBP                             ; 004a0971
    POP EDI                             ; 004a0972
    POP EBX                             ; 004a0973
    RET                                 ; 004a0974

