; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00443f50(float max_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_y_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00443f44 = 00443ffc
;   undefined1* PTR_caseD_3_00443f4c = 00443fe1
;   undefined4 DAT_0151084c
;   undefined4 DAT_01510910
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443f50
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00443f50
    PUSH ESI                            ; 00443f51
    PUSH EDI                            ; 00443f52
    PUSH EBP                            ; 00443f53
    MOV EBP,ESP                         ; 00443f54
    SUB ESP,0x4                         ; 00443f56
    AND ESP,0xfffffff8                  ; 00443f59
    MOV EBX,dword ptr [0x01510910]      ; 00443f5c | DAT_01510910
    MOV EDX,dword ptr [0x0151084c]      ; 00443f62 | DAT_0151084c
    XOR ESI,ESI                         ; 00443f68
    TEST EDX,EDX                        ; 00443f6a
    JLE 0x00443fef                      ; 00443f6c
        ;   XREF to: 00443fef (CONDITIONAL_JUMP)  ; LAB_00443fef
    MOV EDI,0x1510850                   ; 00443f72
    MOV EAX,[0x0151084c]                ; 00443f77 | DAT_0151084c
        ;   Label: LAB_00443f77
    LEA ECX,[ESI + 0x1]                 ; 00443f7c
    CMP ECX,EAX                         ; 00443f7f
    JNZ 0x00443f85                      ; 00443f81
        ;   XREF to: 00443f85 (CONDITIONAL_JUMP)  ; LAB_00443f85
    XOR ECX,EAX                         ; 00443f83
    IMUL ECX,ECX,0xc                    ; 00443f85
        ;   Label: LAB_00443f85
    MOV EAX,0x1510850                   ; 00443f88
    FLD float ptr [EDI + 0x4]           ; 00443f8d
    ADD EAX,ECX                         ; 00443f90
    MOV EDX,EDI                         ; 00443f92
    MOV dword ptr [ESP],EAX             ; 00443f94
    XOR ECX,ECX                         ; 00443f97
    FCOMP float ptr [EBP + 0x14]        ; 00443f99
    FNSTSW AX                           ; 00443f9c
    SAHF                                ; 00443f9e
    JBE 0x00443fa6                      ; 00443f9f
        ;   XREF to: 00443fa6 (CONDITIONAL_JUMP)  ; LAB_00443fa6
    MOV ECX,0x1                         ; 00443fa1
    MOV EAX,dword ptr [ESP]             ; 00443fa6
        ;   Label: LAB_00443fa6
    FLD float ptr [EAX + 0x4]           ; 00443fa9
    FCOMP float ptr [EBP + 0x14]        ; 00443fac
    FNSTSW AX                           ; 00443faf
    SAHF                                ; 00443fb1
    JBE 0x00443fb7                      ; 00443fb2
        ;   XREF to: 00443fb7 (CONDITIONAL_JUMP)  ; LAB_00443fb7
    OR CL,0x2                           ; 00443fb4
    CMP ECX,0x3                         ; 00443fb7
        ;   Label: LAB_00443fb7
    JA 0x00443fe1                       ; 00443fba
        ;   XREF to: 00443fe1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x443f40]  ; 00443fbc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00443fc3
        ;   Label: caseD_0
    ADD ECX,0x1510914                   ; 00443fc6
    CMP ECX,EDX                         ; 00443fcc
    JZ 0x00443fe0                       ; 00443fce
        ;   XREF to: 00443fe0 (CONDITIONAL_JUMP)  ; LAB_00443fe0
    MOV EAX,dword ptr [EDX]             ; 00443fd0
    MOV dword ptr [ECX],EAX             ; 00443fd2
    MOV EAX,dword ptr [EDX + 0x4]       ; 00443fd4
    MOV dword ptr [ECX + 0x4],EAX       ; 00443fd7
    MOV EAX,dword ptr [EDX + 0x8]       ; 00443fda
    MOV dword ptr [ECX + 0x8],EAX       ; 00443fdd
    INC EBX                             ; 00443fe0
        ;   Label: LAB_00443fe0
    MOV ECX,dword ptr [0x0151084c]      ; 00443fe1 | DAT_0151084c
        ;   Label: caseD_3
    INC ESI                             ; 00443fe7
    ADD EDI,0xc                         ; 00443fe8
    CMP ESI,ECX                         ; 00443feb
    JL 0x00443f77                       ; 00443fed
        ;   XREF to: 00443f77 (CONDITIONAL_JUMP)  ; LAB_00443f77
    MOV dword ptr [0x01510910],EBX      ; 00443fef | DAT_01510910
        ;   Label: LAB_00443fef
    MOV ESP,EBP                         ; 00443ff5
    POP EBP                             ; 00443ff7
    POP EDI                             ; 00443ff8
    POP ESI                             ; 00443ff9
    POP EBX                             ; 00443ffa
    RET                                 ; 00443ffb
    IMUL ECX,EBX,0xc                    ; 00443ffc
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00443fff
    SUB ESP,0x8                         ; 00444002
    FCHS                                ; 00444005
    FSTP double ptr [ESP]               ; 00444007
    PUSH 0x0                            ; 0044400a
    PUSH 0x0                            ; 0044400c
    PUSH 0x3ff00000                     ; 0044400e
    PUSH 0x0                            ; 00444013
    PUSH 0x0                            ; 00444015
    PUSH 0x0                            ; 00444017
    ADD ECX,0x1510914                   ; 00444019
    PUSH ECX                            ; 0044401f
    PUSH EDX                            ; 00444020
    MOV EAX,dword ptr [ESP + 0x28]      ; 00444021
    PUSH EAX                            ; 00444025
    MOV dword ptr [0x01510910],EBX      ; 00444026 | DAT_01510910
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 0044402c
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00443db0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x01510910]      ; 00444031 | DAT_01510910
    ADD ESP,0x2c                        ; 00444037
    JMP 0x00443fe0                      ; 0044403a
        ;   XREF to: 00443fe0 (UNCONDITIONAL_JUMP)  ; LAB_00443fe0
    IMUL ECX,EBX,0xc                    ; 0044403c
        ;   Label: caseD_2
    ADD ECX,0x1510914                   ; 0044403f
    CMP ECX,EDX                         ; 00444045
    JZ 0x00444059                       ; 00444047
        ;   XREF to: 00444059 (CONDITIONAL_JUMP)  ; LAB_00444059
    MOV EAX,dword ptr [EDX]             ; 00444049
    MOV dword ptr [ECX],EAX             ; 0044404b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044404d
    MOV dword ptr [ECX + 0x4],EAX       ; 00444050
    MOV EAX,dword ptr [EDX + 0x8]       ; 00444053
    MOV dword ptr [ECX + 0x8],EAX       ; 00444056
    INC EBX                             ; 00444059
        ;   Label: LAB_00444059
    IMUL ECX,EBX,0xc                    ; 0044405a
    FLD float ptr [EBP + 0x14]          ; 0044405d
    SUB ESP,0x8                         ; 00444060
    FCHS                                ; 00444063
    FSTP double ptr [ESP]               ; 00444065
    PUSH 0x0                            ; 00444068
    PUSH 0x0                            ; 0044406a
    PUSH 0x3ff00000                     ; 0044406c
    PUSH 0x0                            ; 00444071
    PUSH 0x0                            ; 00444073
    PUSH 0x0                            ; 00444075
    ADD ECX,0x1510914                   ; 00444077
    PUSH ECX                            ; 0044407d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044407e
    PUSH ECX                            ; 00444082
    PUSH EDX                            ; 00444083
    MOV dword ptr [0x01510910],EBX      ; 00444084 | DAT_01510910
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 0044408a
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00443db0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x01510910]      ; 0044408f | DAT_01510910
    ADD ESP,0x2c                        ; 00444095
    JMP 0x00443fe0                      ; 00444098
        ;   XREF to: 00443fe0 (UNCONDITIONAL_JUMP)  ; LAB_00443fe0

