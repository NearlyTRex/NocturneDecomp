; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00587900(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Called Functions:
;   core_box.cpp_FUN_0041af70
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0
;   core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587900
        ;   Label: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_00587900
    PUSH ESI                            ; 00587901
    PUSH EDI                            ; 00587902
    PUSH EBP                            ; 00587903
    MOV EBP,ESP                         ; 00587904
    SUB ESP,0xb8                        ; 00587906
    AND ESP,0xfffffff8                  ; 0058790c
    PUSH 0x0                            ; 0058790f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00587911
    PUSH EDX                            ; 00587914
    MOV ECX,dword ptr [EBP + 0x18]      ; 00587915
    MOV EAX,dword ptr [EBP + 0x14]      ; 00587918
    PUSH ECX                            ; 0058791b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058791c
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0058791f
    PUSH EBX                            ; 00587925
    LEA ESI,[ESP + 0x78]                ; 00587926
    LEA EDI,[ESP + 0x60]                ; 0058792a
    CALL dword ptr [EAX + 0x24]         ; 0058792e
    MOV ECX,0x6                         ; 00587931
    ADD ESP,0x4                         ; 00587936
    LEA EAX,[ESP + 0x5c]                ; 00587939
    LEA ESI,[ESP + 0x74]                ; 0058793d
    PUSH EAX                            ; 00587941
    MOVSD.REP ES:EDI,ESI                ; 00587942
    CALL core_box.cpp_FUN_0041af70      ; 00587944
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    MOV dword ptr [ESP + 0xc4],EAX      ; 00587949
    FLD float ptr [ESP + 0xc4]          ; 00587950
    ADD ESP,0x10                        ; 00587957
    FLDZ                                ; 0058795a
    FXCH                                ; 0058795c
    FSTP double ptr [ESP]               ; 0058795e
    FCOMP double ptr [ESP]              ; 00587961
    FNSTSW AX                           ; 00587964
    SAHF                                ; 00587966
    JA 0x00587a88                       ; 00587967
        ;   XREF to: 00587a88 (CONDITIONAL_JUMP)  ; LAB_00587a88
    FLD1                                ; 0058796d
    FCOMP double ptr [ESP]              ; 0058796f
    FNSTSW AX                           ; 00587972
    SAHF                                ; 00587974
    JC 0x00587a88                       ; 00587975
        ;   XREF to: 00587a88 (CONDITIONAL_JUMP)  ; LAB_00587a88
    MOV ESI,0x40000000                  ; 0058797b
    MOV EAX,dword ptr [EBX + 0x2b390]   ; 00587980
    ADD EBX,0x8104                      ; 00587986
    XOR EDI,EDI                         ; 0058798c
    MOV dword ptr [ESP + 0xa8],EAX      ; 0058798e
    MOV dword ptr [ESP + 0xac],EDI      ; 00587995
    MOV dword ptr [ESP + 0x14],ESI      ; 0058799c
    TEST EAX,EAX                        ; 005879a0
    JLE 0x00587a37                      ; 005879a2
        ;   XREF to: 00587a37 (CONDITIONAL_JUMP)  ; LAB_00587a37
    MOV EAX,dword ptr [EBP + 0x14]      ; 005879a8
    ADD EAX,0x3f8                       ; 005879ab
    MOV dword ptr [ESP + 0xb0],EAX      ; 005879b0
    MOV EAX,dword ptr [EBX + 0x30]      ; 005879b7
        ;   Label: LAB_005879b7
    MOV ECX,dword ptr [ESP + 0xb0]      ; 005879ba
    SHL EAX,0x5                         ; 005879c1
    ADD EAX,ECX                         ; 005879c4
    PUSH EAX                            ; 005879c6
    MOV EAX,dword ptr [EBX + 0x24]      ; 005879c7
    SHL EAX,0x5                         ; 005879ca
    ADD EAX,ECX                         ; 005879cd
    PUSH EAX                            ; 005879cf
    MOV EAX,dword ptr [EBX + 0x18]      ; 005879d0
    SHL EAX,0x5                         ; 005879d3
    ADD EAX,ECX                         ; 005879d6
    PUSH EAX                            ; 005879d8
    LEA EAX,[ESP + 0x24]                ; 005879d9
    PUSH EAX                            ; 005879dd
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 005879de
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005879e3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005879e6
    PUSH EAX                            ; 005879e9
    MOV EDX,dword ptr [EBP + 0x18]      ; 005879ea
    PUSH EDX                            ; 005879ed
    LEA EAX,[ESP + 0x20]                ; 005879ee
    PUSH EAX                            ; 005879f2
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 005879f3
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_00477a50(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xc0],EAX      ; 005879f8
    FLD float ptr [ESP + 0xc0]          ; 005879ff
    ADD ESP,0xc                         ; 00587a06
    FST float ptr [ESP + 0x10]          ; 00587a09
    FCOMP float ptr [ESP + 0x14]        ; 00587a0d
    FNSTSW AX                           ; 00587a11
    SAHF                                ; 00587a13
    JC 0x00587aa1                       ; 00587a14
        ;   XREF to: 00587aa1 (CONDITIONAL_JUMP)  ; LAB_00587aa1
    MOV ESI,dword ptr [ESP + 0xac]      ; 00587a1a
        ;   Label: LAB_00587a1a
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00587a21
    INC ESI                             ; 00587a28
    ADD EBX,0x48                        ; 00587a29
    MOV dword ptr [ESP + 0xac],ESI      ; 00587a2c
    CMP ESI,EDI                         ; 00587a33
    JL 0x005879b7                       ; 00587a35
        ;   XREF to: 005879b7 (CONDITIONAL_JUMP)  ; LAB_005879b7
    FLD float ptr [ESP + 0x14]          ; 00587a37
        ;   Label: LAB_00587a37
    FLD1                                ; 00587a3b
    FCOMPP                              ; 00587a3d
    FNSTSW AX                           ; 00587a3f
    SAHF                                ; 00587a41
    JBE 0x00587a6f                      ; 00587a42
        ;   XREF to: 00587a6f (CONDITIONAL_JUMP)  ; LAB_00587a6f
    MOV EDX,dword ptr [EBP + 0x20]      ; 00587a44
    LEA EAX,[ESP + 0x80]                ; 00587a47
    CMP EAX,EDX                         ; 00587a4e
    JZ 0x00587a6f                       ; 00587a50
        ;   XREF to: 00587a6f (CONDITIONAL_JUMP)  ; LAB_00587a6f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00587a52
    MOV dword ptr [EDX],EAX             ; 00587a59
    MOV EAX,dword ptr [ESP + 0x84]      ; 00587a5b
    MOV dword ptr [EDX + 0x4],EAX       ; 00587a62
    MOV EAX,dword ptr [ESP + 0x88]      ; 00587a65
    MOV dword ptr [EDX + 0x8],EAX       ; 00587a6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587a6f
        ;   Label: LAB_00587a6f
    MOV dword ptr [ESP + 0xa4],EAX      ; 00587a73
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00587a7a
    MOV ESP,EBP                         ; 00587a81
    POP EBP                             ; 00587a83
    POP EDI                             ; 00587a84
    POP ESI                             ; 00587a85
    POP EBX                             ; 00587a86
    RET                                 ; 00587a87
    MOV dword ptr [ESP + 0xa4],0x40000000 ; 00587a88
        ;   Label: LAB_00587a88
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00587a93
    MOV ESP,EBP                         ; 00587a9a
    POP EBP                             ; 00587a9c
    POP EDI                             ; 00587a9d
    POP ESI                             ; 00587a9e
    POP EBX                             ; 00587a9f
    RET                                 ; 00587aa0
    FLD float ptr [ESP + 0x10]          ; 00587aa1
        ;   Label: LAB_00587aa1
    FLDZ                                ; 00587aa5
    FXCH                                ; 00587aa7
    FSTP double ptr [ESP + 0x8]         ; 00587aa9
    FCOMP double ptr [ESP + 0x8]        ; 00587aad
    FNSTSW AX                           ; 00587ab1
    SAHF                                ; 00587ab3
    JA 0x00587a1a                       ; 00587ab4
        ;   XREF to: 00587a1a (CONDITIONAL_JUMP)  ; LAB_00587a1a
    FLD1                                ; 00587aba
    FCOMP double ptr [ESP + 0x8]        ; 00587abc
    FNSTSW AX                           ; 00587ac0
    SAHF                                ; 00587ac2
    JC 0x00587a1a                       ; 00587ac3
        ;   XREF to: 00587a1a (CONDITIONAL_JUMP)  ; LAB_00587a1a
    FLD float ptr [ESP + 0x3c]          ; 00587ac9
    FLD float ptr [ESP + 0x40]          ; 00587acd
    FLD float ptr [ESP + 0x44]          ; 00587ad1
    MOV EAX,dword ptr [ESP + 0x10]      ; 00587ad5
    LEA EDI,[ESP + 0x98]                ; 00587ad9
    LEA ESI,[ESP + 0x8c]                ; 00587ae0
    LEA EDX,[ESP + 0x98]                ; 00587ae7
    FXCH ST2                            ; 00587aee
    FCHS                                ; 00587af0
    FXCH                                ; 00587af2
    FCHS                                ; 00587af4
    FXCH ST2                            ; 00587af6
    FCHS                                ; 00587af8
    FXCH                                ; 00587afa
    FSTP float ptr [ESP + 0x8c]         ; 00587afc
    FXCH                                ; 00587b03
    FSTP float ptr [ESP + 0x90]         ; 00587b05
    FSTP float ptr [ESP + 0x94]         ; 00587b0c
    MOV dword ptr [ESP + 0x14],EAX      ; 00587b13
    LEA EAX,[ESP + 0x80]                ; 00587b17
    MOVSD ES:EDI,ESI                    ; 00587b1e
    MOVSD ES:EDI,ESI                    ; 00587b1f
    MOVSD ES:EDI,ESI                    ; 00587b20
    CMP EAX,EDX                         ; 00587b21
    JZ 0x00587a1a                       ; 00587b23
        ;   XREF to: 00587a1a (CONDITIONAL_JUMP)  ; LAB_00587a1a
    MOV EAX,dword ptr [ESP + 0x98]      ; 00587b29
    MOV dword ptr [ESP + 0x80],EAX      ; 00587b30
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00587b37
    MOV dword ptr [ESP + 0x84],EAX      ; 00587b3e
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00587b45
    MOV dword ptr [ESP + 0x88],EAX      ; 00587b4c
    JMP 0x00587a1a                      ; 00587b53
        ;   XREF to: 00587a1a (UNCONDITIONAL_JUMP)  ; LAB_00587a1a

