; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_00491690(float z_far)
;
; Parameters:
; float            Stack[0x4]:4   z_far
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00491678 = 00491744
;   undefined1* PTR_caseD_3_00491680 = 00491729
;   undefined4 DAT_01c3d814
;   undefined4 DAT_01c3d8d8
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00490df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491690
        ;   Label: core_dtri.cpp_clipPolygonToFar_FUN_00491690
    PUSH ESI                            ; 00491691
    PUSH EDI                            ; 00491692
    PUSH EBP                            ; 00491693
    MOV EBP,ESP                         ; 00491694
    SUB ESP,0x8                         ; 00491696
    AND ESP,0xfffffff8                  ; 00491699
    MOV EBX,dword ptr [0x01c3d8d8]      ; 0049169c | DAT_01c3d8d8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004916a2
    MOV dword ptr [ESP],EDX             ; 004916a5
    MOV EDX,dword ptr [0x01c3d814]      ; 004916a8 | DAT_01c3d814
    XOR EDI,EDI                         ; 004916ae
    TEST EDX,EDX                        ; 004916b0
    JLE 0x00491737                      ; 004916b2
        ;   XREF to: 00491737 (CONDITIONAL_JUMP)  ; LAB_00491737
    MOV ESI,0x1c3d818                   ; 004916b8
    MOV EAX,[0x01c3d814]                ; 004916bd | DAT_01c3d814
        ;   Label: LAB_004916bd
    LEA ECX,[EDI + 0x1]                 ; 004916c2
    CMP ECX,EAX                         ; 004916c5
    JNZ 0x004916cb                      ; 004916c7
        ;   XREF to: 004916cb (CONDITIONAL_JUMP)  ; LAB_004916cb
    XOR ECX,EAX                         ; 004916c9
    IMUL ECX,ECX,0xc                    ; 004916cb
        ;   Label: LAB_004916cb
    MOV EAX,0x1c3d818                   ; 004916ce
    FLD float ptr [ESI + 0x8]           ; 004916d3
    ADD EAX,ECX                         ; 004916d6
    MOV EDX,ESI                         ; 004916d8
    MOV dword ptr [ESP + 0x4],EAX       ; 004916da
    XOR ECX,ECX                         ; 004916de
    FCOMP float ptr [ESP]               ; 004916e0
    FNSTSW AX                           ; 004916e3
    SAHF                                ; 004916e5
    JBE 0x004916ed                      ; 004916e6
        ;   XREF to: 004916ed (CONDITIONAL_JUMP)  ; LAB_004916ed
    MOV ECX,0x1                         ; 004916e8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004916ed
        ;   Label: LAB_004916ed
    FLD float ptr [EAX + 0x8]           ; 004916f1
    FCOMP float ptr [ESP]               ; 004916f4
    FNSTSW AX                           ; 004916f7
    SAHF                                ; 004916f9
    JBE 0x004916ff                      ; 004916fa
        ;   XREF to: 004916ff (CONDITIONAL_JUMP)  ; LAB_004916ff
    OR CL,0x2                           ; 004916fc
    CMP ECX,0x3                         ; 004916ff
        ;   Label: LAB_004916ff
    JA 0x00491729                       ; 00491702
        ;   XREF to: 00491729 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491674]  ; 00491704 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049170b
        ;   Label: caseD_0
    ADD ECX,0x1c3d8dc                   ; 0049170e
    CMP ECX,EDX                         ; 00491714
    JZ 0x00491728                       ; 00491716
        ;   XREF to: 00491728 (CONDITIONAL_JUMP)  ; LAB_00491728
    MOV EAX,dword ptr [EDX]             ; 00491718
    MOV dword ptr [ECX],EAX             ; 0049171a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049171c
    MOV dword ptr [ECX + 0x4],EAX       ; 0049171f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491722
    MOV dword ptr [ECX + 0x8],EAX       ; 00491725
    INC EBX                             ; 00491728
        ;   Label: LAB_00491728
    MOV ECX,dword ptr [0x01c3d814]      ; 00491729 | DAT_01c3d814
        ;   Label: caseD_3
    INC EDI                             ; 0049172f
    ADD ESI,0xc                         ; 00491730
    CMP EDI,ECX                         ; 00491733
    JL 0x004916bd                       ; 00491735
        ;   XREF to: 004916bd (CONDITIONAL_JUMP)  ; LAB_004916bd
    MOV dword ptr [0x01c3d8d8],EBX      ; 00491737 | DAT_01c3d8d8
        ;   Label: LAB_00491737
    MOV ESP,EBP                         ; 0049173d
    POP EBP                             ; 0049173f
    POP EDI                             ; 00491740
    POP ESI                             ; 00491741
    POP EBX                             ; 00491742
    RET                                 ; 00491743
    IMUL ECX,EBX,0xc                    ; 00491744
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00491747
    SUB ESP,0x8                         ; 0049174a
    FSTP double ptr [ESP]               ; 0049174d
    PUSH 0xbff00000                     ; 00491750
    PUSH 0x0                            ; 00491755
    PUSH 0x0                            ; 00491757
    PUSH 0x0                            ; 00491759
    PUSH 0x0                            ; 0049175b
    PUSH 0x0                            ; 0049175d
    ADD ECX,0x1c3d8dc                   ; 0049175f
    PUSH ECX                            ; 00491765
    PUSH EDX                            ; 00491766
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00491767
    PUSH EAX                            ; 0049176b
    MOV dword ptr [0x01c3d8d8],EBX      ; 0049176c | DAT_01c3d8d8
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491772
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00490df0()
    MOV EBX,dword ptr [0x01c3d8d8]      ; 00491777 | DAT_01c3d8d8
    ADD ESP,0x2c                        ; 0049177d
    JMP 0x00491728                      ; 00491780
        ;   XREF to: 00491728 (UNCONDITIONAL_JUMP)  ; LAB_00491728
    IMUL ECX,EBX,0xc                    ; 00491782
        ;   Label: caseD_2
    ADD ECX,0x1c3d8dc                   ; 00491785
    CMP ECX,EDX                         ; 0049178b
    JZ 0x0049179f                       ; 0049178d
        ;   XREF to: 0049179f (CONDITIONAL_JUMP)  ; LAB_0049179f
    MOV EAX,dword ptr [EDX]             ; 0049178f
    MOV dword ptr [ECX],EAX             ; 00491791
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491793
    MOV dword ptr [ECX + 0x4],EAX       ; 00491796
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491799
    MOV dword ptr [ECX + 0x8],EAX       ; 0049179c
    INC EBX                             ; 0049179f
        ;   Label: LAB_0049179f
    IMUL ECX,EBX,0xc                    ; 004917a0
    FLD float ptr [ESP]                 ; 004917a3
    SUB ESP,0x8                         ; 004917a6
    FSTP double ptr [ESP]               ; 004917a9
    PUSH 0xbff00000                     ; 004917ac
    PUSH 0x0                            ; 004917b1
    PUSH 0x0                            ; 004917b3
    PUSH 0x0                            ; 004917b5
    PUSH 0x0                            ; 004917b7
    PUSH 0x0                            ; 004917b9
    ADD ECX,0x1c3d8dc                   ; 004917bb
    PUSH ECX                            ; 004917c1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004917c2
    PUSH ECX                            ; 004917c6
    PUSH EDX                            ; 004917c7
    MOV dword ptr [0x01c3d8d8],EBX      ; 004917c8 | DAT_01c3d8d8
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 004917ce
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00490df0()
    MOV EBX,dword ptr [0x01c3d8d8]      ; 004917d3 | DAT_01c3d8d8
    ADD ESP,0x2c                        ; 004917d9
    JMP 0x00491728                      ; 004917dc
        ;   XREF to: 00491728 (UNCONDITIONAL_JUMP)  ; LAB_00491728

