; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_0043f860(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 at 00448a80
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044af89
;
; Referenced Globals:
;   undefined4 DAT_01308800
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f860
        ;   Label: core_dcamera.cpp_renderCoronaDepthScanline_FUN_0043f860
    PUSH ESI                            ; 0043f861
    PUSH EDI                            ; 0043f862
    PUSH EBP                            ; 0043f863
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043f864
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043f868
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043f86c
    SUB ECX,dword ptr [0x01c35e4c]      ; 0043f870 | DAT_01c35e4c
    MOV EBX,dword ptr [0x01308800]      ; 0043f876 | DAT_01308800
    MOV dword ptr [ESP + 0x14],ECX      ; 0043f87c
    CMP EBX,0x1                         ; 0043f880
    JNZ 0x0043f890                      ; 0043f883
        ;   XREF to: 0043f890 (CONDITIONAL_JUMP)  ; LAB_0043f890
    TEST byte ptr [ESP + 0x14],0x1      ; 0043f885
    JNZ 0x0043f970                      ; 0043f88a
        ;   XREF to: 0043f970 (CONDITIONAL_JUMP)  ; LAB_0043f970
    CMP dword ptr [0x01308800],0x2      ; 0043f890 | DAT_01308800
        ;   Label: LAB_0043f890
    JNZ 0x0043f8a4                      ; 0043f897
        ;   XREF to: 0043f8a4 (CONDITIONAL_JUMP)  ; LAB_0043f8a4
    TEST byte ptr [ESP + 0x14],0x3      ; 0043f899
    JNZ 0x0043f970                      ; 0043f89e
        ;   XREF to: 0043f970 (CONDITIONAL_JUMP)  ; LAB_0043f970
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043f8a4
        ;   Label: LAB_0043f8a4
    MOV CL,byte ptr [0x01308800]        ; 0043f8a8 | DAT_01308800
    MOV EAX,[0x01c35e48]                ; 0043f8ae | DAT_01c35e48
    MOV EBX,dword ptr [EDI + 0x8]       ; 0043f8b3
    MOV ESI,dword ptr [EDX + 0x8]       ; 0043f8b6
    SAR EBX,0x10                        ; 0043f8b9
    SAR ESI,0x10                        ; 0043f8bc
    SAR EBP,CL                          ; 0043f8bf
    SUB EBX,EAX                         ; 0043f8c1
    SUB ESI,EAX                         ; 0043f8c3
    SAR EBX,CL                          ; 0043f8c5
    SAR ESI,CL                          ; 0043f8c7
    MOV dword ptr [ESP + 0x14],EBP      ; 0043f8c9
    CMP EBX,ESI                         ; 0043f8cd
    JLE 0x0043f8dd                      ; 0043f8cf
        ;   XREF to: 0043f8dd (CONDITIONAL_JUMP)  ; LAB_0043f8dd
    MOV EAX,EBX                         ; 0043f8d1
    MOV EBX,ESI                         ; 0043f8d3
    MOV ESI,EAX                         ; 0043f8d5
    MOV EAX,EDI                         ; 0043f8d7
    MOV EDI,EDX                         ; 0043f8d9
    MOV EDX,EAX                         ; 0043f8db
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043f8dd
        ;   Label: LAB_0043f8dd
    SHL EAX,0x2                         ; 0043f8e1
    CMP EBX,dword ptr [EAX + 0x14c3550] ; 0043f8e4
    JNC 0x0043f8fb                      ; 0043f8ea
        ;   XREF to: 0043f8fb (CONDITIONAL_JUMP)  ; LAB_0043f8fb
    MOV dword ptr [EAX + 0x14c3550],EBX ; 0043f8ec
    MOV ECX,dword ptr [EDI + 0x10]      ; 0043f8f2
    MOV dword ptr [EAX + 0x150ecd0],ECX ; 0043f8f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043f8fb
        ;   Label: LAB_0043f8fb
    SHL EAX,0x2                         ; 0043f8ff
    CMP ESI,dword ptr [EAX + 0x14c3910] ; 0043f902
    JBE 0x0043f919                      ; 0043f908
        ;   XREF to: 0043f919 (CONDITIONAL_JUMP)  ; LAB_0043f919
    MOV dword ptr [EAX + 0x14c3910],ESI ; 0043f90a
    MOV ECX,dword ptr [EDX + 0x10]      ; 0043f910
    MOV dword ptr [EAX + 0x150f090],ECX ; 0043f913
    MOV EAX,ESI                         ; 0043f919
        ;   Label: LAB_0043f919
    MOV EDX,dword ptr [EDX + 0x28]      ; 0043f91b
    MOV ECX,dword ptr [EDI + 0x28]      ; 0043f91e
    SUB EAX,EBX                         ; 0043f921
    SUB EDX,ECX                         ; 0043f923
    LEA EDI,[EAX + 0x1]                 ; 0043f925
    MOV EAX,EDX                         ; 0043f928
    SAR EDX,0x1f                        ; 0043f92a
    IDIV EDI                            ; 0043f92d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043f92f
    MOV EDI,EAX                         ; 0043f933
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043f935
    ADD EAX,EDX                         ; 0043f93c
    MOV EDX,0x14c3cd0                   ; 0043f93e
    SHL EAX,0x8                         ; 0043f943
    ADD EDX,EAX                         ; 0043f946
    LEA EAX,[EBX*0x4 + 0x0]             ; 0043f948
    ADD EAX,EDX                         ; 0043f94f
    CMP EBX,ESI                         ; 0043f951
    JGE 0x0043f970                      ; 0043f953
        ;   XREF to: 0043f970 (CONDITIONAL_JUMP)  ; LAB_0043f970
    MOV EDX,ECX                         ; 0043f955
        ;   Label: LAB_0043f955
    INC EBX                             ; 0043f957
    ADD EAX,0x4                         ; 0043f958
    SAR EDX,0x8                         ; 0043f95b
    ADD ECX,EDI                         ; 0043f95e
    MOV dword ptr [EAX + -0x4],EDX      ; 0043f960
    CMP EBX,ESI                         ; 0043f963
    JL 0x0043f955                       ; 0043f965
        ;   XREF to: 0043f955 (CONDITIONAL_JUMP)  ; LAB_0043f955
    LEA EAX,[EAX]                       ; 0043f967
    LEA EDX,[EDX]                       ; 0043f96d
    POP EBP                             ; 0043f970
        ;   Label: LAB_0043f970
    POP EDI                             ; 0043f971
    POP ESI                             ; 0043f972
    POP EBX                             ; 0043f973
    RET                                 ; 0043f974

