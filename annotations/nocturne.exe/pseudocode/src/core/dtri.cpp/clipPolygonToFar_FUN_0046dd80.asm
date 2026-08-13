; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0046dd80(float z_far)
;
; Parameters:
; float            Stack[0x4]:4   z_far
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0046dd68 = 0046de34
;   undefined1* PTR_caseD_3_0046dd70 = 0046de19
;   undefined4 DAT_01bc9d40
;   CVector3f[16] g_CVector3f_ARRAY_01bc9d44
;   undefined4 g_CVector3f_ARRAY_01bc9d44[0].y
;   undefined4 g_CVector3f_ARRAY_01bc9d44[0].z
;   undefined4 g_CVector3f_ARRAY_01bc9d44[1].z
;   undefined4 g_CVector3f_ARRAY_01bc9d44[2].z
;   undefined4 DAT_01bc9e04
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046dd80
        ;   Label: core_dtri.cpp_clipPolygonToFar_FUN_0046dd80
    PUSH ESI                            ; 0046dd81
    PUSH EDI                            ; 0046dd82
    PUSH EBP                            ; 0046dd83
    MOV EBP,ESP                         ; 0046dd84
    SUB ESP,0x8                         ; 0046dd86
    AND ESP,0xfffffff8                  ; 0046dd89
    MOV EBX,dword ptr [0x01bc9e04]      ; 0046dd8c | DAT_01bc9e04
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046dd92
    MOV dword ptr [ESP],EDX             ; 0046dd95
    MOV EDX,dword ptr [0x01bc9d40]      ; 0046dd98 | DAT_01bc9d40
    XOR EDI,EDI                         ; 0046dd9e
    TEST EDX,EDX                        ; 0046dda0
    JLE 0x0046de27                      ; 0046dda2
        ;   XREF to: 0046de27 (CONDITIONAL_JUMP)  ; LAB_0046de27
    MOV ESI,0x1bc9d44                   ; 0046dda8
    MOV EAX,[0x01bc9d40]                ; 0046ddad | DAT_01bc9d40
        ;   Label: LAB_0046ddad
    LEA ECX,[EDI + 0x1]                 ; 0046ddb2
    CMP ECX,EAX                         ; 0046ddb5
    JNZ 0x0046ddbb                      ; 0046ddb7
        ;   XREF to: 0046ddbb (CONDITIONAL_JUMP)  ; LAB_0046ddbb
    XOR ECX,EAX                         ; 0046ddb9
    IMUL ECX,ECX,0xc                    ; 0046ddbb
        ;   Label: LAB_0046ddbb
    MOV EAX,0x1bc9d44                   ; 0046ddbe
    FLD float ptr [ESI + 0x8]           ; 0046ddc3 | g_CVector3f_ARRAY_01bc9d44[0].z | g_CVector3f_ARRAY_01bc9d44[1].z
    ADD EAX,ECX                         ; 0046ddc6
    MOV EDX,ESI                         ; 0046ddc8
    MOV dword ptr [ESP + 0x4],EAX       ; 0046ddca
    XOR ECX,ECX                         ; 0046ddce
    FCOMP float ptr [ESP]               ; 0046ddd0
    FNSTSW AX                           ; 0046ddd3
    SAHF                                ; 0046ddd5
    JBE 0x0046dddd                      ; 0046ddd6
        ;   XREF to: 0046dddd (CONDITIONAL_JUMP)  ; LAB_0046dddd
    MOV ECX,0x1                         ; 0046ddd8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046dddd
        ;   Label: LAB_0046dddd
    FLD float ptr [EAX + 0x8]           ; 0046dde1 | g_CVector3f_ARRAY_01bc9d44[0].z | g_CVector3f_ARRAY_01bc9d44[2].z
    FCOMP float ptr [ESP]               ; 0046dde4
    FNSTSW AX                           ; 0046dde7
    SAHF                                ; 0046dde9
    JBE 0x0046ddef                      ; 0046ddea
        ;   XREF to: 0046ddef (CONDITIONAL_JUMP)  ; LAB_0046ddef
    OR CL,0x2                           ; 0046ddec
    CMP ECX,0x3                         ; 0046ddef
        ;   Label: LAB_0046ddef
    JA 0x0046de19                       ; 0046ddf2
        ;   XREF to: 0046de19 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46dd64]  ; 0046ddf4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0046ddfb
        ;   Label: caseD_0
    ADD ECX,0x1bc9e08                   ; 0046ddfe
    CMP ECX,EDX                         ; 0046de04
    JZ 0x0046de18                       ; 0046de06
        ;   XREF to: 0046de18 (CONDITIONAL_JUMP)  ; LAB_0046de18
    MOV EAX,dword ptr [EDX]             ; 0046de08 | g_CVector3f_ARRAY_01bc9d44
    MOV dword ptr [ECX],EAX             ; 0046de0a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046de0c | g_CVector3f_ARRAY_01bc9d44[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046de0f
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046de12 | g_CVector3f_ARRAY_01bc9d44[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046de15
    INC EBX                             ; 0046de18
        ;   Label: LAB_0046de18
    MOV ECX,dword ptr [0x01bc9d40]      ; 0046de19 | DAT_01bc9d40
        ;   Label: caseD_3
    INC EDI                             ; 0046de1f
    ADD ESI,0xc                         ; 0046de20
    CMP EDI,ECX                         ; 0046de23
    JL 0x0046ddad                       ; 0046de25
        ;   XREF to: 0046ddad (CONDITIONAL_JUMP)  ; LAB_0046ddad
    MOV dword ptr [0x01bc9e04],EBX      ; 0046de27 | DAT_01bc9e04
        ;   Label: LAB_0046de27
    MOV ESP,EBP                         ; 0046de2d
    POP EBP                             ; 0046de2f
    POP EDI                             ; 0046de30
    POP ESI                             ; 0046de31
    POP EBX                             ; 0046de32
    RET                                 ; 0046de33
    IMUL ECX,EBX,0xc                    ; 0046de34
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0046de37
    SUB ESP,0x8                         ; 0046de3a
    FSTP double ptr [ESP]               ; 0046de3d
    PUSH 0xbff00000                     ; 0046de40
    PUSH 0x0                            ; 0046de45
    PUSH 0x0                            ; 0046de47
    PUSH 0x0                            ; 0046de49
    PUSH 0x0                            ; 0046de4b
    PUSH 0x0                            ; 0046de4d
    ADD ECX,0x1bc9e08                   ; 0046de4f
    PUSH ECX                            ; 0046de55
    PUSH EDX                            ; 0046de56 | g_CVector3f_ARRAY_01bc9d44
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0046de57
    PUSH EAX                            ; 0046de5b
    MOV dword ptr [0x01bc9e04],EBX      ; 0046de5c | DAT_01bc9e04
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046de62
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01bc9e04]      ; 0046de67 | DAT_01bc9e04
    ADD ESP,0x2c                        ; 0046de6d
    JMP 0x0046de18                      ; 0046de70
        ;   XREF to: 0046de18 (UNCONDITIONAL_JUMP)  ; LAB_0046de18
    IMUL ECX,EBX,0xc                    ; 0046de72
        ;   Label: caseD_2
    ADD ECX,0x1bc9e08                   ; 0046de75
    CMP ECX,EDX                         ; 0046de7b
    JZ 0x0046de8f                       ; 0046de7d
        ;   XREF to: 0046de8f (CONDITIONAL_JUMP)  ; LAB_0046de8f
    MOV EAX,dword ptr [EDX]             ; 0046de7f | g_CVector3f_ARRAY_01bc9d44
    MOV dword ptr [ECX],EAX             ; 0046de81
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046de83 | g_CVector3f_ARRAY_01bc9d44[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046de86
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046de89 | g_CVector3f_ARRAY_01bc9d44[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046de8c
    INC EBX                             ; 0046de8f
        ;   Label: LAB_0046de8f
    IMUL ECX,EBX,0xc                    ; 0046de90
    FLD float ptr [ESP]                 ; 0046de93
    SUB ESP,0x8                         ; 0046de96
    FSTP double ptr [ESP]               ; 0046de99
    PUSH 0xbff00000                     ; 0046de9c
    PUSH 0x0                            ; 0046dea1
    PUSH 0x0                            ; 0046dea3
    PUSH 0x0                            ; 0046dea5
    PUSH 0x0                            ; 0046dea7
    PUSH 0x0                            ; 0046dea9
    ADD ECX,0x1bc9e08                   ; 0046deab
    PUSH ECX                            ; 0046deb1
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046deb2
    PUSH ECX                            ; 0046deb6
    PUSH EDX                            ; 0046deb7 | g_CVector3f_ARRAY_01bc9d44
    MOV dword ptr [0x01bc9e04],EBX      ; 0046deb8 | DAT_01bc9e04
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046debe
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01bc9e04]      ; 0046dec3 | DAT_01bc9e04
    ADD ESP,0x2c                        ; 0046dec9
    JMP 0x0046de18                      ; 0046decc
        ;   XREF to: 0046de18 (UNCONDITIONAL_JUMP)  ; LAB_0046de18

