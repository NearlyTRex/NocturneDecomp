; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046dab0(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0046daa0 = 0046db62
;   undefined1* PTR_caseD_3_0046daa8 = 0046db47
;   undefined4 DAT_01bc9bb8
;   CVector3f[16] g_CVector3f_ARRAY_01bc9bbc
;   undefined4 g_CVector3f_ARRAY_01bc9bbc[0].y
;   undefined4 g_CVector3f_ARRAY_01bc9bbc[0].z
;   undefined4 g_CVector3f_ARRAY_01bc9bbc[1].x
;   undefined4 g_CVector3f_ARRAY_01bc9bbc[2].x
;   undefined4 DAT_01bc9c7c
;   CVector3f[16] g_CVector3f_ARRAY_01bc9c80
;   undefined4 g_CVector3f_ARRAY_01bc9c80[0].y
;   undefined4 g_CVector3f_ARRAY_01bc9c80[0].z
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046dab0
        ;   Label: core_dtri.cpp_FUN_0046dab0
    PUSH ESI                            ; 0046dab1
    PUSH EDI                            ; 0046dab2
    PUSH EBP                            ; 0046dab3
    MOV EBP,ESP                         ; 0046dab4
    SUB ESP,0x8                         ; 0046dab6
    AND ESP,0xfffffff8                  ; 0046dab9
    MOV EBX,dword ptr [0x01bc9c7c]      ; 0046dabc | DAT_01bc9c7c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046dac2
    MOV dword ptr [ESP],EDX             ; 0046dac5
    MOV EDX,dword ptr [0x01bc9bb8]      ; 0046dac8 | DAT_01bc9bb8
    XOR EDI,EDI                         ; 0046dace
    TEST EDX,EDX                        ; 0046dad0
    JLE 0x0046db55                      ; 0046dad2
        ;   XREF to: 0046db55 (CONDITIONAL_JUMP)  ; LAB_0046db55
    MOV ESI,0x1bc9bbc                   ; 0046dad8
    MOV EAX,[0x01bc9bb8]                ; 0046dadd | DAT_01bc9bb8
        ;   Label: LAB_0046dadd
    LEA ECX,[EDI + 0x1]                 ; 0046dae2
    CMP ECX,EAX                         ; 0046dae5
    JNZ 0x0046daeb                      ; 0046dae7
        ;   XREF to: 0046daeb (CONDITIONAL_JUMP)  ; LAB_0046daeb
    XOR ECX,EAX                         ; 0046dae9
    IMUL ECX,ECX,0xc                    ; 0046daeb
        ;   Label: LAB_0046daeb
    MOV EAX,0x1bc9bbc                   ; 0046daee
    FLD float ptr [ESI]                 ; 0046daf3 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[1].x
    ADD EAX,ECX                         ; 0046daf5
    MOV EDX,ESI                         ; 0046daf7
    MOV dword ptr [ESP + 0x4],EAX       ; 0046daf9 | g_CVector3f_ARRAY_01bc9bbc[2].x
    XOR ECX,ECX                         ; 0046dafd
    FCOMP float ptr [ESP]               ; 0046daff
    FNSTSW AX                           ; 0046db02
    SAHF                                ; 0046db04
    JNC 0x0046db0c                      ; 0046db05
        ;   XREF to: 0046db0c (CONDITIONAL_JUMP)  ; LAB_0046db0c
    MOV ECX,0x1                         ; 0046db07
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046db0c
        ;   Label: LAB_0046db0c
    FLD float ptr [EAX]                 ; 0046db10 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[2].x
    FCOMP float ptr [ESP]               ; 0046db12
    FNSTSW AX                           ; 0046db15
    SAHF                                ; 0046db17
    JNC 0x0046db1d                      ; 0046db18
        ;   XREF to: 0046db1d (CONDITIONAL_JUMP)  ; LAB_0046db1d
    OR CL,0x2                           ; 0046db1a
    CMP ECX,0x3                         ; 0046db1d
        ;   Label: LAB_0046db1d
    JA 0x0046db47                       ; 0046db20
        ;   XREF to: 0046db47 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46da9c]  ; 0046db22 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0046db29
        ;   Label: caseD_0
    ADD ECX,0x1bc9c80                   ; 0046db2c
    CMP ECX,EDX                         ; 0046db32
    JZ 0x0046db46                       ; 0046db34
        ;   XREF to: 0046db46 (CONDITIONAL_JUMP)  ; LAB_0046db46
    MOV EAX,dword ptr [EDX]             ; 0046db36 | g_CVector3f_ARRAY_01bc9bbc
    MOV dword ptr [ECX],EAX             ; 0046db38 | g_CVector3f_ARRAY_01bc9c80
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046db3a | g_CVector3f_ARRAY_01bc9bbc[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046db3d | g_CVector3f_ARRAY_01bc9c80[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046db40 | g_CVector3f_ARRAY_01bc9bbc[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046db43 | g_CVector3f_ARRAY_01bc9c80[0].z
    INC EBX                             ; 0046db46
        ;   Label: LAB_0046db46
    MOV ECX,dword ptr [0x01bc9bb8]      ; 0046db47 | DAT_01bc9bb8
        ;   Label: caseD_3
    INC EDI                             ; 0046db4d
    ADD ESI,0xc                         ; 0046db4e
    CMP EDI,ECX                         ; 0046db51
    JL 0x0046dadd                       ; 0046db53
        ;   XREF to: 0046dadd (CONDITIONAL_JUMP)  ; LAB_0046dadd
    MOV dword ptr [0x01bc9c7c],EBX      ; 0046db55 | DAT_01bc9c7c
        ;   Label: LAB_0046db55
    MOV ESP,EBP                         ; 0046db5b
    POP EBP                             ; 0046db5d
    POP EDI                             ; 0046db5e
    POP ESI                             ; 0046db5f
    POP EBX                             ; 0046db60
    RET                                 ; 0046db61
    IMUL ECX,EBX,0xc                    ; 0046db62
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0046db65
    SUB ESP,0x8                         ; 0046db68
    FSTP double ptr [ESP]               ; 0046db6b
    PUSH 0x0                            ; 0046db6e
    PUSH 0x0                            ; 0046db70
    PUSH 0x0                            ; 0046db72
    PUSH 0x0                            ; 0046db74
    PUSH 0xbff00000                     ; 0046db76
    PUSH 0x0                            ; 0046db7b
    ADD ECX,0x1bc9c80                   ; 0046db7d
    PUSH ECX                            ; 0046db83
    PUSH EDX                            ; 0046db84 | g_CVector3f_ARRAY_01bc9bbc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0046db85
    PUSH EAX                            ; 0046db89
    MOV dword ptr [0x01bc9c7c],EBX      ; 0046db8a | DAT_01bc9c7c
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046db90
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01bc9c7c]      ; 0046db95 | DAT_01bc9c7c
    ADD ESP,0x2c                        ; 0046db9b
    JMP 0x0046db46                      ; 0046db9e
        ;   XREF to: 0046db46 (UNCONDITIONAL_JUMP)  ; LAB_0046db46
    IMUL ECX,EBX,0xc                    ; 0046dba0
        ;   Label: caseD_2
    ADD ECX,0x1bc9c80                   ; 0046dba3
    CMP ECX,EDX                         ; 0046dba9
    JZ 0x0046dbbd                       ; 0046dbab
        ;   XREF to: 0046dbbd (CONDITIONAL_JUMP)  ; LAB_0046dbbd
    MOV EAX,dword ptr [EDX]             ; 0046dbad | g_CVector3f_ARRAY_01bc9bbc
    MOV dword ptr [ECX],EAX             ; 0046dbaf | g_CVector3f_ARRAY_01bc9c80
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046dbb1 | g_CVector3f_ARRAY_01bc9bbc[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046dbb4 | g_CVector3f_ARRAY_01bc9c80[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046dbb7 | g_CVector3f_ARRAY_01bc9bbc[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046dbba | g_CVector3f_ARRAY_01bc9c80[0].z
    INC EBX                             ; 0046dbbd
        ;   Label: LAB_0046dbbd
    IMUL ECX,EBX,0xc                    ; 0046dbbe
    FLD float ptr [ESP]                 ; 0046dbc1
    SUB ESP,0x8                         ; 0046dbc4
    FSTP double ptr [ESP]               ; 0046dbc7
    PUSH 0x0                            ; 0046dbca
    PUSH 0x0                            ; 0046dbcc
    PUSH 0x0                            ; 0046dbce
    PUSH 0x0                            ; 0046dbd0
    PUSH 0xbff00000                     ; 0046dbd2
    PUSH 0x0                            ; 0046dbd7
    ADD ECX,0x1bc9c80                   ; 0046dbd9
    PUSH ECX                            ; 0046dbdf
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046dbe0
    PUSH ECX                            ; 0046dbe4
    PUSH EDX                            ; 0046dbe5 | g_CVector3f_ARRAY_01bc9bbc
    MOV dword ptr [0x01bc9c7c],EBX      ; 0046dbe6 | DAT_01bc9c7c
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046dbec
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01bc9c7c]      ; 0046dbf1 | DAT_01bc9c7c
    ADD ESP,0x2c                        ; 0046dbf7
    JMP 0x0046db46                      ; 0046dbfa
        ;   XREF to: 0046db46 (UNCONDITIONAL_JUMP)  ; LAB_0046db46

