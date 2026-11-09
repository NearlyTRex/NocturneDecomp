; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sentinel_cpp_FUN_0054cc80(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01e820fc
;   undefined4 DAT_01e82110
;   undefined4 DAT_01e82114
;   undefined4 DAT_01e82120
;   undefined4 DAT_01e82128
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cc80
        ;   Label: core_sentinel.cpp_FUN_0054cc80
    PUSH ESI                            ; 0054cc81
    PUSH EDI                            ; 0054cc82
    PUSH EBP                            ; 0054cc83
    SUB ESP,0x7c                        ; 0054cc84
    MOV EBP,dword ptr [ESP + 0x90]      ; 0054cc87
    MOV EBX,dword ptr [ESP + 0x94]      ; 0054cc8e
    MOV ECX,dword ptr [0x01e820fc]      ; 0054cc95 | DAT_01e820fc
    MOV EDX,0x5                         ; 0054cc9b
    PUSH ECX                            ; 0054cca0
    LEA EAX,[EBP + 0x158]               ; 0054cca1
    LEA ESI,[ESP + 0x4c]                ; 0054cca7
    PUSH EAX                            ; 0054ccab
    LEA EDI,[ESP + 0x44]                ; 0054ccac
    MOV dword ptr [ESP + 0x80],EDX      ; 0054ccb0
    CALL core_skeleton.cpp_FUN_00569130 ; 0054ccb7
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x50]                ; 0054ccbc
    ADD ESP,0x8                         ; 0054ccc0
    LEA EAX,[ESP + 0x3c]                ; 0054ccc3
    MOVSD ES:EDI,ESI                    ; 0054ccc7
    MOVSD ES:EDI,ESI                    ; 0054ccc8
    MOVSD ES:EDI,ESI                    ; 0054ccc9
    CMP EBX,EAX                         ; 0054ccca
    JZ 0x0054cce2                       ; 0054cccc
        ;   XREF to: 0054cce2 (CONDITIONAL_JUMP)  ; LAB_0054cce2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054ccce
    MOV dword ptr [EBX],EAX             ; 0054ccd2
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054ccd4
    MOV dword ptr [EBX + 0x4],EAX       ; 0054ccd8
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054ccdb
    MOV dword ptr [EBX + 0x8],EAX       ; 0054ccdf
    MOV ESI,dword ptr [0x01e82110]      ; 0054cce2 | DAT_01e82110
        ;   Label: LAB_0054cce2
    PUSH ESI                            ; 0054cce8
    LEA EAX,[EBP + 0x158]               ; 0054cce9
    PUSH EAX                            ; 0054ccef
    LEA ESI,[ESP + 0x8]                 ; 0054ccf0
    LEA EDI,[ESP + 0x14]                ; 0054ccf4
    CALL core_skeleton.cpp_FUN_00569130 ; 0054ccf8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 0054ccfd
    LEA EAX,[ESP + 0x14]                ; 0054cd01
    ADD ESP,0x8                         ; 0054cd05
    LEA EDX,[EBX + 0xc]                 ; 0054cd08
    MOVSD ES:EDI,ESI                    ; 0054cd0b
    MOVSD ES:EDI,ESI                    ; 0054cd0c
    MOVSD ES:EDI,ESI                    ; 0054cd0d
    CMP EDX,EAX                         ; 0054cd0e
    JZ 0x0054cd26                       ; 0054cd10
        ;   XREF to: 0054cd26 (CONDITIONAL_JUMP)  ; LAB_0054cd26
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054cd12
    MOV dword ptr [EDX],EAX             ; 0054cd16
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054cd18
    MOV dword ptr [EDX + 0x4],EAX       ; 0054cd1c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054cd1f
    MOV dword ptr [EDX + 0x8],EAX       ; 0054cd23
    MOV EDI,dword ptr [0x01e82114]      ; 0054cd26 | DAT_01e82114
        ;   Label: LAB_0054cd26
    PUSH EDI                            ; 0054cd2c
    LEA EAX,[EBP + 0x158]               ; 0054cd2d
    PUSH EAX                            ; 0054cd33
    LEA ESI,[ESP + 0x74]                ; 0054cd34
    LEA EDI,[ESP + 0x20]                ; 0054cd38
    CALL core_skeleton.cpp_FUN_00569130 ; 0054cd3c
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x74]                ; 0054cd41
    LEA EAX,[ESP + 0x20]                ; 0054cd45
    ADD ESP,0x8                         ; 0054cd49
    LEA EDX,[EBX + 0x18]                ; 0054cd4c
    MOVSD ES:EDI,ESI                    ; 0054cd4f
    MOVSD ES:EDI,ESI                    ; 0054cd50
    MOVSD ES:EDI,ESI                    ; 0054cd51
    CMP EDX,EAX                         ; 0054cd52
    JZ 0x0054cd6a                       ; 0054cd54
        ;   XREF to: 0054cd6a (CONDITIONAL_JUMP)  ; LAB_0054cd6a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054cd56
    MOV dword ptr [EDX],EAX             ; 0054cd5a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054cd5c
    MOV dword ptr [EDX + 0x4],EAX       ; 0054cd60
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054cd63
    MOV dword ptr [EDX + 0x8],EAX       ; 0054cd67
    MOV EAX,[0x01e82120]                ; 0054cd6a | DAT_01e82120
        ;   Label: LAB_0054cd6a
    PUSH EAX                            ; 0054cd6f
    LEA EAX,[EBP + 0x158]               ; 0054cd70
    PUSH EAX                            ; 0054cd76
    LEA ESI,[ESP + 0x38]                ; 0054cd77
    LEA EDI,[ESP + 0x5c]                ; 0054cd7b
    CALL core_skeleton.cpp_FUN_00569130 ; 0054cd7f
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x38]                ; 0054cd84
    LEA EAX,[ESP + 0x5c]                ; 0054cd88
    ADD ESP,0x8                         ; 0054cd8c
    LEA EDX,[EBX + 0x24]                ; 0054cd8f
    MOVSD ES:EDI,ESI                    ; 0054cd92
    MOVSD ES:EDI,ESI                    ; 0054cd93
    MOVSD ES:EDI,ESI                    ; 0054cd94
    CMP EDX,EAX                         ; 0054cd95
    JZ 0x0054cdad                       ; 0054cd97
        ;   XREF to: 0054cdad (CONDITIONAL_JUMP)  ; LAB_0054cdad
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054cd99
    MOV dword ptr [EDX],EAX             ; 0054cd9d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054cd9f
    MOV dword ptr [EDX + 0x4],EAX       ; 0054cda3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054cda6
    MOV dword ptr [EDX + 0x8],EAX       ; 0054cdaa
    MOV EDX,dword ptr [0x01e82128]      ; 0054cdad | DAT_01e82128
        ;   Label: LAB_0054cdad
    PUSH EDX                            ; 0054cdb3
    ADD EBP,0x158                       ; 0054cdb4
    LEA ESI,[ESP + 0x64]                ; 0054cdba
    PUSH EBP                            ; 0054cdbe
    LEA EDI,[ESP + 0x2c]                ; 0054cdbf
    ADD EBX,0x30                        ; 0054cdc3
    CALL core_skeleton.cpp_FUN_00569130 ; 0054cdc6
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x68]                ; 0054cdcb
    ADD ESP,0x8                         ; 0054cdcf
    LEA EAX,[ESP + 0x24]                ; 0054cdd2
    MOVSD ES:EDI,ESI                    ; 0054cdd6
    MOVSD ES:EDI,ESI                    ; 0054cdd7
    MOVSD ES:EDI,ESI                    ; 0054cdd8
    CMP EBX,EAX                         ; 0054cdd9
    JNZ 0x0054cde9                      ; 0054cddb
        ;   XREF to: 0054cde9 (CONDITIONAL_JUMP)  ; LAB_0054cde9
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054cddd
    ADD ESP,0x7c                        ; 0054cde1
    POP EBP                             ; 0054cde4
    POP EDI                             ; 0054cde5
    POP ESI                             ; 0054cde6
    POP EBX                             ; 0054cde7
    RET                                 ; 0054cde8
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054cde9
        ;   Label: LAB_0054cde9
    MOV dword ptr [EBX],EAX             ; 0054cded
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054cdef
    MOV dword ptr [EBX + 0x4],EAX       ; 0054cdf3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054cdf6
    MOV dword ptr [EBX + 0x8],EAX       ; 0054cdfa
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054cdfd
    ADD ESP,0x7c                        ; 0054ce01
    POP EBP                             ; 0054ce04
    POP EDI                             ; 0054ce05
    POP ESI                             ; 0054ce06
    POP EBX                             ; 0054ce07
    RET                                 ; 0054ce08

