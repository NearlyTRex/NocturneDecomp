; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_004558d0(float max_x_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_x_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004558b8 = 0045597a
;   undefined1* PTR_caseD_3_004558c0 = 0045595f
;   undefined4 DAT_0152bed4
;   undefined4 DAT_0152bf98
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00455460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004558d0
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_004558d0
    PUSH ESI                            ; 004558d1
    PUSH EDI                            ; 004558d2
    PUSH EBP                            ; 004558d3
    MOV EBP,ESP                         ; 004558d4
    SUB ESP,0x4                         ; 004558d6
    AND ESP,0xfffffff8                  ; 004558d9
    MOV EBX,dword ptr [0x0152bf98]      ; 004558dc | DAT_0152bf98
    MOV EDX,dword ptr [0x0152bed4]      ; 004558e2 | DAT_0152bed4
    XOR ESI,ESI                         ; 004558e8
    TEST EDX,EDX                        ; 004558ea
    JLE 0x0045596d                      ; 004558ec
        ;   XREF to: 0045596d (CONDITIONAL_JUMP)  ; LAB_0045596d
    MOV EDI,0x152bed8                   ; 004558f2
    MOV EAX,[0x0152bed4]                ; 004558f7 | DAT_0152bed4
        ;   Label: LAB_004558f7
    LEA ECX,[ESI + 0x1]                 ; 004558fc
    CMP ECX,EAX                         ; 004558ff
    JNZ 0x00455905                      ; 00455901
        ;   XREF to: 00455905 (CONDITIONAL_JUMP)  ; LAB_00455905
    XOR ECX,EAX                         ; 00455903
    IMUL ECX,ECX,0xc                    ; 00455905
        ;   Label: LAB_00455905
    MOV EAX,0x152bed8                   ; 00455908
    FLD float ptr [EDI]                 ; 0045590d
    ADD EAX,ECX                         ; 0045590f
    MOV EDX,EDI                         ; 00455911
    MOV dword ptr [ESP],EAX             ; 00455913
    XOR ECX,ECX                         ; 00455916
    FCOMP float ptr [EBP + 0x14]        ; 00455918
    FNSTSW AX                           ; 0045591b
    SAHF                                ; 0045591d
    JBE 0x00455925                      ; 0045591e
        ;   XREF to: 00455925 (CONDITIONAL_JUMP)  ; LAB_00455925
    MOV ECX,0x1                         ; 00455920
    MOV EAX,dword ptr [ESP]             ; 00455925
        ;   Label: LAB_00455925
    FLD float ptr [EAX]                 ; 00455928
    FCOMP float ptr [EBP + 0x14]        ; 0045592a
    FNSTSW AX                           ; 0045592d
    SAHF                                ; 0045592f
    JBE 0x00455935                      ; 00455930
        ;   XREF to: 00455935 (CONDITIONAL_JUMP)  ; LAB_00455935
    OR CL,0x2                           ; 00455932
    CMP ECX,0x3                         ; 00455935
        ;   Label: LAB_00455935
    JA 0x0045595f                       ; 00455938
        ;   XREF to: 0045595f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4558b4]  ; 0045593a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00455941
        ;   Label: caseD_0
    ADD ECX,0x152bf9c                   ; 00455944
    CMP ECX,EDX                         ; 0045594a
    JZ 0x0045595e                       ; 0045594c
        ;   XREF to: 0045595e (CONDITIONAL_JUMP)  ; LAB_0045595e
    MOV EAX,dword ptr [EDX]             ; 0045594e
    MOV dword ptr [ECX],EAX             ; 00455950
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455952
    MOV dword ptr [ECX + 0x4],EAX       ; 00455955
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455958
    MOV dword ptr [ECX + 0x8],EAX       ; 0045595b
    INC EBX                             ; 0045595e
        ;   Label: LAB_0045595e
    MOV ECX,dword ptr [0x0152bed4]      ; 0045595f | DAT_0152bed4
        ;   Label: caseD_3
    INC ESI                             ; 00455965
    ADD EDI,0xc                         ; 00455966
    CMP ESI,ECX                         ; 00455969
    JL 0x004558f7                       ; 0045596b
        ;   XREF to: 004558f7 (CONDITIONAL_JUMP)  ; LAB_004558f7
    MOV dword ptr [0x0152bf98],EBX      ; 0045596d | DAT_0152bf98
        ;   Label: LAB_0045596d
    MOV ESP,EBP                         ; 00455973
    POP EBP                             ; 00455975
    POP EDI                             ; 00455976
    POP ESI                             ; 00455977
    POP EBX                             ; 00455978
    RET                                 ; 00455979
    IMUL ECX,EBX,0xc                    ; 0045597a
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0045597d
    SUB ESP,0x8                         ; 00455980
    FCHS                                ; 00455983
    FSTP double ptr [ESP]               ; 00455985
    PUSH 0x0                            ; 00455988
    PUSH 0x0                            ; 0045598a
    PUSH 0x0                            ; 0045598c
    PUSH 0x0                            ; 0045598e
    PUSH 0x3ff00000                     ; 00455990
    PUSH 0x0                            ; 00455995
    ADD ECX,0x152bf9c                   ; 00455997
    PUSH ECX                            ; 0045599d
    PUSH EDX                            ; 0045599e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045599f
    PUSH EAX                            ; 004559a3
    MOV dword ptr [0x0152bf98],EBX      ; 004559a4 | DAT_0152bf98
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 004559aa
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EBX,dword ptr [0x0152bf98]      ; 004559af | DAT_0152bf98
    ADD ESP,0x2c                        ; 004559b5
    JMP 0x0045595e                      ; 004559b8
        ;   XREF to: 0045595e (UNCONDITIONAL_JUMP)  ; LAB_0045595e
    IMUL ECX,EBX,0xc                    ; 004559ba
        ;   Label: caseD_2
    ADD ECX,0x152bf9c                   ; 004559bd
    CMP ECX,EDX                         ; 004559c3
    JZ 0x004559d7                       ; 004559c5
        ;   XREF to: 004559d7 (CONDITIONAL_JUMP)  ; LAB_004559d7
    MOV EAX,dword ptr [EDX]             ; 004559c7
    MOV dword ptr [ECX],EAX             ; 004559c9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004559cb
    MOV dword ptr [ECX + 0x4],EAX       ; 004559ce
    MOV EAX,dword ptr [EDX + 0x8]       ; 004559d1
    MOV dword ptr [ECX + 0x8],EAX       ; 004559d4
    INC EBX                             ; 004559d7
        ;   Label: LAB_004559d7
    IMUL ECX,EBX,0xc                    ; 004559d8
    FLD float ptr [EBP + 0x14]          ; 004559db
    SUB ESP,0x8                         ; 004559de
    FCHS                                ; 004559e1
    FSTP double ptr [ESP]               ; 004559e3
    PUSH 0x0                            ; 004559e6
    PUSH 0x0                            ; 004559e8
    PUSH 0x0                            ; 004559ea
    PUSH 0x0                            ; 004559ec
    PUSH 0x3ff00000                     ; 004559ee
    PUSH 0x0                            ; 004559f3
    ADD ECX,0x152bf9c                   ; 004559f5
    PUSH ECX                            ; 004559fb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004559fc
    PUSH ECX                            ; 00455a00
    PUSH EDX                            ; 00455a01
    MOV dword ptr [0x0152bf98],EBX      ; 00455a02 | DAT_0152bf98
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00455a08
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EBX,dword ptr [0x0152bf98]      ; 00455a0d | DAT_0152bf98
    ADD ESP,0x2c                        ; 00455a13
    JMP 0x0045595e                      ; 00455a16
        ;   XREF to: 0045595e (UNCONDITIONAL_JUMP)  ; LAB_0045595e

