; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_matrix_c_FUN_004cdd30(int param_1)
;
;
; XREF[1]:
;   engine_matrix.c_FUN_004cde10 at 004cde32
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00588258
;   TerminatedCString s_sqrt_out_of_domain_0058826b
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdd30
        ;   Label: engine_matrix.c_FUN_004cdd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cdd31
    CMP EBX,0x1                         ; 004cdd35
    JL 0x004cddd9                       ; 004cdd38
        ;   XREF to: 004cddd9 (CONDITIONAL_JUMP)  ; LAB_004cddd9
    MOV ECX,0xc8                        ; 004cdd3e
        ;   Label: LAB_004cdd3e
    MOV EDX,EBX                         ; 004cdd43
    MOV EAX,EBX                         ; 004cdd45
    SAR EDX,0x1f                        ; 004cdd47
    IDIV ECX                            ; 004cdd4a
    LEA ECX,[EAX + 0x2]                 ; 004cdd4c
    MOV EDX,EBX                         ; 004cdd4f
    MOV EAX,EBX                         ; 004cdd51
    SAR EDX,0x1f                        ; 004cdd53
    IDIV ECX                            ; 004cdd56
    LEA EDX,[EAX + ECX*0x1]             ; 004cdd58
    MOV EAX,EDX                         ; 004cdd5b
    SAR EDX,0x1f                        ; 004cdd5d
    SUB EAX,EDX                         ; 004cdd60
    SAR EAX,0x1                         ; 004cdd62
    MOV ECX,EAX                         ; 004cdd64
    MOV EDX,EBX                         ; 004cdd66
    MOV EAX,EBX                         ; 004cdd68
    SAR EDX,0x1f                        ; 004cdd6a
    IDIV ECX                            ; 004cdd6d
    LEA EDX,[EAX + ECX*0x1]             ; 004cdd6f
    MOV EAX,EDX                         ; 004cdd72
    SAR EDX,0x1f                        ; 004cdd74
    SUB EAX,EDX                         ; 004cdd77
    SAR EAX,0x1                         ; 004cdd79
    MOV ECX,EAX                         ; 004cdd7b
    MOV EDX,EBX                         ; 004cdd7d
    MOV EAX,EBX                         ; 004cdd7f
    SAR EDX,0x1f                        ; 004cdd81
    IDIV ECX                            ; 004cdd84
    LEA EDX,[EAX + ECX*0x1]             ; 004cdd86
    MOV EAX,EDX                         ; 004cdd89
    SAR EDX,0x1f                        ; 004cdd8b
    SUB EAX,EDX                         ; 004cdd8e
    SAR EAX,0x1                         ; 004cdd90
    MOV ECX,EAX                         ; 004cdd92
    MOV EDX,EBX                         ; 004cdd94
    MOV EAX,EBX                         ; 004cdd96
    SAR EDX,0x1f                        ; 004cdd98
    IDIV ECX                            ; 004cdd9b
    LEA EDX,[EAX + ECX*0x1]             ; 004cdd9d
    MOV EAX,EDX                         ; 004cdda0
    SAR EDX,0x1f                        ; 004cdda2
    SUB EAX,EDX                         ; 004cdda5
    SAR EAX,0x1                         ; 004cdda7
    MOV ECX,EAX                         ; 004cdda9
    MOV EDX,EBX                         ; 004cddab
    MOV EAX,EBX                         ; 004cddad
    SAR EDX,0x1f                        ; 004cddaf
    IDIV ECX                            ; 004cddb2
    LEA EDX,[EAX + ECX*0x1]             ; 004cddb4
    MOV EAX,EDX                         ; 004cddb7
    SAR EDX,0x1f                        ; 004cddb9
    SUB EAX,EDX                         ; 004cddbc
    SAR EAX,0x1                         ; 004cddbe
    MOV ECX,EAX                         ; 004cddc0
    MOV EDX,EBX                         ; 004cddc2
    MOV EAX,EBX                         ; 004cddc4
    SAR EDX,0x1f                        ; 004cddc6
    IDIV ECX                            ; 004cddc9
    LEA EDX,[EAX + ECX*0x1]             ; 004cddcb
    MOV EAX,EDX                         ; 004cddce
    SAR EDX,0x1f                        ; 004cddd0
    SUB EAX,EDX                         ; 004cddd3
    SAR EAX,0x1                         ; 004cddd5
    POP EBX                             ; 004cddd7
    RET                                 ; 004cddd8
    MOV EDX,0x588258                    ; 004cddd9 | = "..\\engine\\matrix.c"
        ;   Label: LAB_004cddd9
    MOV ECX,0x38e                       ; 004cddde
    PUSH 0x58826b                       ; 004cdde3 | = "sqrt out of domain!"
    MOV dword ptr [0x01cc4800],EDX      ; 004cdde8 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004cddee | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004cddf4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004cddf9
    JMP 0x004cdd3e                      ; 004cddfc
        ;   XREF to: 004cdd3e (UNCONDITIONAL_JUMP)  ; LAB_004cdd3e

