; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00568730(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stairs.cpp_CStairs_setup_FUN_00568420 at 00568432
;
; Referenced Globals:
;   undefined4 DAT_005d5ca0
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568730
        ;   Label: core_stairs.cpp_CStairs_buildCollision_FUN_00568730
    PUSH ESI                            ; 00568731
    PUSH EBP                            ; 00568732
    SUB ESP,0x4c                        ; 00568733
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00568736
    FLD double ptr [0x005d5ca0]         ; 0056873a | DAT_005d5ca0
    FLD float ptr [EBX + 0x160]         ; 00568740
    FMUL ST1                            ; 00568746
    FLD float ptr [EBX + 0x160]         ; 00568748
    FCHS                                ; 0056874e
    FMULP ST2                           ; 00568750
    MOV EDX,dword ptr [EBX + 0x16c]     ; 00568752
    XOR ESI,ESI                         ; 00568758
    FSTP float ptr [ESP + 0x40]         ; 0056875a
    FSTP float ptr [ESP + 0x44]         ; 0056875e
    TEST EDX,EDX                        ; 00568762
    JLE 0x0056885b                      ; 00568764
        ;   XREF to: 0056885b (CONDITIONAL_JUMP)  ; LAB_0056885b
    PUSH EDI                            ; 0056876a
    LEA EDI,[EBX + 0x170]               ; 0056876b
    LEA EBP,[EBX + 0x1a8]               ; 00568771
    INC ESI                             ; 00568777
        ;   Label: LAB_00568777
    MOV dword ptr [ESP + 0x4c],ESI      ; 00568778
    FILD dword ptr [ESP + 0x4c]         ; 0056877c
    FLD float ptr [EBX + 0x158]         ; 00568780
    FMUL ST1                            ; 00568786
    FLD float ptr [EBX + 0x15c]         ; 00568788
    FMULP ST2                           ; 0056878e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00568790
    FSTP float ptr [ESP + 0x38]         ; 00568794
    FSTP float ptr [ESP + 0x40]         ; 00568798
    FLD float ptr [ESP + 0x38]          ; 0056879c
    FLD float ptr [ESP + 0x40]          ; 005687a0
    FSUB float ptr [EBX + 0x168]        ; 005687a4
    FXCH                                ; 005687aa
    FSUB float ptr [EBX + 0x164]        ; 005687ac
    MOV dword ptr [ESP + 0x4],EAX       ; 005687b2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005687b6
    MOV dword ptr [ESP + 0x8],EAX       ; 005687ba
    MOV EAX,dword ptr [ESP + 0x40]      ; 005687be
    MOV dword ptr [ESP + 0xc],EAX       ; 005687c2
    MOV EAX,dword ptr [ESP + 0x44]      ; 005687c6
    MOV dword ptr [ESP + 0x10],EAX      ; 005687ca
    MOV EAX,dword ptr [ESP + 0x38]      ; 005687ce
    MOV dword ptr [ESP + 0x14],EAX      ; 005687d2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005687d6
    MOV dword ptr [ESP + 0x18],EAX      ; 005687da
    MOV EAX,dword ptr [ESP + 0x44]      ; 005687de
    FSTP float ptr [ESP + 0x3c]         ; 005687e2
    MOV dword ptr [ESP + 0x28],EAX      ; 005687e6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005687ea
    FSTP float ptr [ESP + 0x34]         ; 005687ee
    MOV dword ptr [ESP + 0x2c],EAX      ; 005687f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 005687f6
    MOV dword ptr [ESP + 0x30],EAX      ; 005687fa
    MOV EAX,dword ptr [ESP + 0x48]      ; 005687fe
    MOV dword ptr [ESP + 0x1c],EAX      ; 00568802
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00568806
    MOV dword ptr [ESP + 0x20],EAX      ; 0056880a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056880e
    MOV dword ptr [ESP + 0x24],EAX      ; 00568812
    LEA EAX,[ESP + 0x28]                ; 00568816
    PUSH EAX                            ; 0056881a
    LEA EAX,[ESP + 0x14]                ; 0056881b
    PUSH EAX                            ; 0056881f
    LEA EAX,[ESP + 0xc]                 ; 00568820
    PUSH EAX                            ; 00568824
    PUSH EDI                            ; 00568825
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 00568826
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0056882b
    LEA EAX,[ESP + 0x1c]                ; 0056882e
    PUSH EAX                            ; 00568832
    LEA EAX,[ESP + 0x2c]                ; 00568833
    PUSH EAX                            ; 00568837
    LEA EAX,[ESP + 0xc]                 ; 00568838
    PUSH EAX                            ; 0056883c
    PUSH EBP                            ; 0056883d
    ADD EDI,0x70                        ; 0056883e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 00568841
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00568846
    MOV ECX,dword ptr [EBX + 0x16c]     ; 00568849
    ADD EBP,0x70                        ; 0056884f
    CMP ESI,ECX                         ; 00568852
    JL 0x00568777                       ; 00568854
        ;   XREF to: 00568777 (CONDITIONAL_JUMP)  ; LAB_00568777
    POP EDI                             ; 0056885a
    ADD ESP,0x4c                        ; 0056885b
        ;   Label: LAB_0056885b
    POP EBP                             ; 0056885e
    POP ESI                             ; 0056885f
    POP EBX                             ; 00568860
    RET                                 ; 00568861

