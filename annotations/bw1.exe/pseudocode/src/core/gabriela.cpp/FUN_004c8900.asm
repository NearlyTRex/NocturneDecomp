; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004c8900(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6d19
;
; Referenced Globals:
;   undefined4 DAT_005e10ac
;   undefined4 DAT_01cc9148
;   undefined4 DAT_01cc914c
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8900
        ;   Label: core_gabriela.cpp_FUN_004c8900
    PUSH EDI                            ; 004c8901
    PUSH EBP                            ; 004c8902
    SUB ESP,0x54                        ; 004c8903
    MOV EBX,ESI                         ; 004c8906
    MOV EDX,dword ptr [0x01cc914c]      ; 004c8908 | DAT_01cc914c
    MOV EBP,dword ptr [ESP + 0x64]      ; 004c890e
    PUSH EDX                            ; 004c8912
    ADD EBP,0x158                       ; 004c8913
    PUSH EBP                            ; 004c8919
    LEA ESI,[ESP + 0x20]                ; 004c891a
    LEA EDI,[ESP + 0x38]                ; 004c891e
    CALL core_skeleton.cpp_FUN_00569040 ; 004c8922
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 004c8927
    MOV ECX,dword ptr [0x01cc9148]      ; 004c892a | DAT_01cc9148
    LEA ESI,[ESP + 0x18]                ; 004c8930
    PUSH ECX                            ; 004c8934
    MOVSD ES:EDI,ESI                    ; 004c8935
    MOVSD ES:EDI,ESI                    ; 004c8936
    MOVSD ES:EDI,ESI                    ; 004c8937
    PUSH EBP                            ; 004c8938
    LEA ESI,[ESP + 0x2c]                ; 004c8939
    LEA EDI,[ESP + 0x8]                 ; 004c893d
    CALL core_skeleton.cpp_FUN_00569040 ; 004c8941
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x2c]                ; 004c8946
    ADD ESP,0x8                         ; 004c894a
    MOVSD ES:EDI,ESI                    ; 004c894d
    MOVSD ES:EDI,ESI                    ; 004c894e
    MOVSD ES:EDI,ESI                    ; 004c894f
    FLD float ptr [ESP]                 ; 004c8950
    FLD float ptr [ESP + 0x4]           ; 004c8953
    FLD float ptr [ESP + 0x8]           ; 004c8957
    LEA EDI,[ESP + 0x3c]                ; 004c895b
    LEA ESI,[ESP + 0xc]                 ; 004c895f
    FXCH ST2                            ; 004c8963
    FADD float ptr [ESP + 0x30]         ; 004c8965
    FXCH                                ; 004c8969
    FADD float ptr [ESP + 0x34]         ; 004c896b
    FXCH ST2                            ; 004c896f
    FADD float ptr [ESP + 0x38]         ; 004c8971
    FXCH                                ; 004c8975
    FSTP float ptr [ESP + 0xc]          ; 004c8977
    FXCH                                ; 004c897b
    FSTP float ptr [ESP + 0x10]         ; 004c897d
    FSTP float ptr [ESP + 0x14]         ; 004c8981
    MOVSD ES:EDI,ESI                    ; 004c8985
    MOVSD ES:EDI,ESI                    ; 004c8986
    MOVSD ES:EDI,ESI                    ; 004c8987
    FLD float ptr [0x005e10ac]          ; 004c8988 | DAT_005e10ac
    FLD float ptr [ESP + 0x3c]          ; 004c898e
    FMUL ST1                            ; 004c8992
    FLD float ptr [ESP + 0x40]          ; 004c8994
    FMUL ST2                            ; 004c8998
    FLD float ptr [ESP + 0x44]          ; 004c899a
    FMULP ST3                           ; 004c899e
    LEA ESI,[ESP + 0x48]                ; 004c89a0
    MOV EDI,EBX                         ; 004c89a4
    FXCH                                ; 004c89a6
    FSTP float ptr [ESP + 0x48]         ; 004c89a8
    FSTP float ptr [ESP + 0x4c]         ; 004c89ac
    FSTP float ptr [ESP + 0x50]         ; 004c89b0
    MOVSD ES:EDI,ESI                    ; 004c89b4
    MOVSD ES:EDI,ESI                    ; 004c89b5
    MOVSD ES:EDI,ESI                    ; 004c89b6
    MOV EAX,EBX                         ; 004c89b7
    ADD ESP,0x54                        ; 004c89b9
    POP EBP                             ; 004c89bc
    POP EDI                             ; 004c89bd
    POP EBX                             ; 004c89be
    RET                                 ; 004c89bf

