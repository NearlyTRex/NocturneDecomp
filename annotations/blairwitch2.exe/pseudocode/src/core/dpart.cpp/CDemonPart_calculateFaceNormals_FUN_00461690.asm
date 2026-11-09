; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00461690(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dpart.cpp_FUN_004619b0 at 004619b1
;
; Called Functions:
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00461690
        ;   Label: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00461690
    PUSH EDI                            ; 00461691
    PUSH EBP                            ; 00461692
    SUB ESP,0x3c                        ; 00461693
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00461696
    MOV EDX,dword ptr [ESI + 0x24]      ; 0046169a
    XOR EDI,EDI                         ; 0046169d
    TEST EDX,EDX                        ; 0046169f
    JLE 0x00461752                      ; 004616a1
        ;   XREF to: 00461752 (CONDITIONAL_JUMP)  ; LAB_00461752
    PUSH EBX                            ; 004616a7
    XOR EBX,EBX                         ; 004616a8
    MOV dword ptr [ESP + 0x8],0x3       ; 004616aa
        ;   Label: LAB_004616aa
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616b2
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 004616b5
    MOV dword ptr [ESP + 0xc],EAX       ; 004616b8
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616bc
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 004616bf
    MOV dword ptr [ESP + 0x10],EAX      ; 004616c3
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616c7
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004616ca
    MOV dword ptr [ESP + 0x14],EAX      ; 004616ce
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616d2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 004616d5
    MOV dword ptr [ESP + 0x18],EAX      ; 004616d9
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616dd
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 004616e0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004616e4
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616e8
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14] ; 004616eb
    MOV dword ptr [ESP + 0x28],EAX      ; 004616ef
    MOV EAX,dword ptr [ESI + 0x34]      ; 004616f3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x18] ; 004616f6
    MOV dword ptr [ESP + 0x34],EAX      ; 004616fa
    LEA EAX,[ESP + 0x4]                 ; 004616fe
    PUSH EAX                            ; 00461702
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00461703
    PUSH EBP                            ; 00461706
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0 ; 00461707
        ;   XREF to: 004df5f0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0()
    MOV EAX,dword ptr [ESI + 0x34]      ; 0046170c
    ADD ESP,0x8                         ; 0046170f
    LEA EDX,[EAX + EBX*0x1]             ; 00461712
    MOV EAX,dword ptr [ESP + 0xc]       ; 00461715
    MOV dword ptr [EDX],EAX             ; 00461719
    MOV EAX,dword ptr [ESI + 0x34]      ; 0046171b
    LEA EDX,[EAX + EBX*0x1]             ; 0046171e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00461721
    MOV dword ptr [EDX + 0x4],EAX       ; 00461725
    MOV EAX,dword ptr [ESI + 0x34]      ; 00461728
    LEA EDX,[EAX + EBX*0x1]             ; 0046172b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046172e
    MOV dword ptr [EDX + 0x8],EAX       ; 00461732
    MOV EAX,dword ptr [ESI + 0x34]      ; 00461735
    LEA EDX,[EAX + EBX*0x1]             ; 00461738
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046173b
    MOV dword ptr [EDX + 0xc],EAX       ; 0046173f
    INC EDI                             ; 00461742
    MOV EAX,dword ptr [ESI + 0x24]      ; 00461743
    ADD EBX,0x20                        ; 00461746
    CMP EDI,EAX                         ; 00461749
    JL 0x004616aa                       ; 0046174b
        ;   XREF to: 004616aa (CONDITIONAL_JUMP)  ; LAB_004616aa
    POP EBX                             ; 00461751
    ADD ESP,0x3c                        ; 00461752
        ;   Label: LAB_00461752
    POP EBP                             ; 00461755
    POP EDI                             ; 00461756
    POP ESI                             ; 00461757
    RET                                 ; 00461758

