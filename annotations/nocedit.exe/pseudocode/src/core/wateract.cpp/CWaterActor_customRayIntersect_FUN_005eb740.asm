; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x50]:1  local_50
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eb740
        ;   Label: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
    PUSH ESI                            ; 005eb741
    PUSH EDI                            ; 005eb742
    PUSH EBP                            ; 005eb743
    MOV EBP,ESP                         ; 005eb744
    SUB ESP,0x8c                        ; 005eb746
    AND ESP,0xfffffff8                  ; 005eb74c
    MOV ESI,dword ptr [EBP + 0x14]      ; 005eb74f
    PUSH 0x0                            ; 005eb752
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005eb754
    PUSH EDX                            ; 005eb757
    MOV ECX,dword ptr [EBP + 0x18]      ; 005eb758
    PUSH ECX                            ; 005eb75b
    LEA EAX,[ESP + 0x5c]                ; 005eb75c
    PUSH EAX                            ; 005eb760
    MOV EDX,dword ptr [ESI + 0x154]     ; 005eb761
    PUSH ESI                            ; 005eb767
    CALL dword ptr [EDX + 0x14]         ; 005eb768
    ADD ESP,0x8                         ; 005eb76b
    PUSH EAX                            ; 005eb76e
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 005eb76f
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0x98],EAX      ; 005eb774
    FLD float ptr [ESP + 0x98]          ; 005eb77b
    ADD ESP,0x10                        ; 005eb782
    FLDZ                                ; 005eb785
    FXCH                                ; 005eb787
    FSTP double ptr [ESP]               ; 005eb789
    FCOMP double ptr [ESP]              ; 005eb78c
    FNSTSW AX                           ; 005eb78f
    SAHF                                ; 005eb791
    JA 0x005eb87a                       ; 005eb792
        ;   XREF to: 005eb87a (CONDITIONAL_JUMP)  ; LAB_005eb87a
    FLD1                                ; 005eb798
    FCOMP double ptr [ESP]              ; 005eb79a
    FNSTSW AX                           ; 005eb79d
    SAHF                                ; 005eb79f
    JC 0x005eb87a                       ; 005eb7a0
        ;   XREF to: 005eb87a (CONDITIONAL_JUMP)  ; LAB_005eb87a
    MOV EBX,0x40000000                  ; 005eb7a6
    MOV EAX,dword ptr [ESI + 0x2b234]   ; 005eb7ab
    XOR EDI,EDI                         ; 005eb7b1
    MOV dword ptr [ESP + 0x14],EBX      ; 005eb7b3
    MOV dword ptr [ESP + 0x84],EAX      ; 005eb7b7
    LEA EBX,[ESI + 0x7fa8]              ; 005eb7be
    TEST EAX,EAX                        ; 005eb7c4
    JLE 0x005eb835                      ; 005eb7c6
        ;   XREF to: 005eb835 (CONDITIONAL_JUMP)  ; LAB_005eb835
    ADD ESI,0x29c                       ; 005eb7c8
    MOV EAX,dword ptr [EBX + 0x30]      ; 005eb7ce
        ;   Label: LAB_005eb7ce
    SHL EAX,0x5                         ; 005eb7d1
    ADD EAX,ESI                         ; 005eb7d4
    PUSH EAX                            ; 005eb7d6
    MOV EAX,dword ptr [EBX + 0x24]      ; 005eb7d7
    SHL EAX,0x5                         ; 005eb7da
    ADD EAX,ESI                         ; 005eb7dd
    PUSH EAX                            ; 005eb7df
    MOV EAX,dword ptr [EBX + 0x18]      ; 005eb7e0
    SHL EAX,0x5                         ; 005eb7e3
    ADD EAX,ESI                         ; 005eb7e6
    PUSH EAX                            ; 005eb7e8
    LEA EAX,[ESP + 0x24]                ; 005eb7e9
    PUSH EAX                            ; 005eb7ed
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005eb7ee
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005eb7f3
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005eb7f6
    PUSH ECX                            ; 005eb7f9
    MOV EAX,dword ptr [EBP + 0x18]      ; 005eb7fa
    PUSH EAX                            ; 005eb7fd
    LEA EAX,[ESP + 0x20]                ; 005eb7fe
    PUSH EAX                            ; 005eb802
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 005eb803
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x94],EAX      ; 005eb808
    FLD float ptr [ESP + 0x94]          ; 005eb80f
    ADD ESP,0xc                         ; 005eb816
    FST float ptr [ESP + 0x10]          ; 005eb819
    FCOMP float ptr [ESP + 0x14]        ; 005eb81d
    FNSTSW AX                           ; 005eb821
    SAHF                                ; 005eb823
    JC 0x005eb887                       ; 005eb824
        ;   XREF to: 005eb887 (CONDITIONAL_JUMP)  ; LAB_005eb887
    MOV EAX,dword ptr [ESP + 0x84]      ; 005eb826
        ;   Label: LAB_005eb826
    INC EDI                             ; 005eb82d
    ADD EBX,0x48                        ; 005eb82e
    CMP EDI,EAX                         ; 005eb831
    JL 0x005eb7ce                       ; 005eb833
        ;   XREF to: 005eb7ce (CONDITIONAL_JUMP)  ; LAB_005eb7ce
    FLD float ptr [ESP + 0x14]          ; 005eb835
        ;   Label: LAB_005eb835
    FLD1                                ; 005eb839
    FCOMPP                              ; 005eb83b
    FNSTSW AX                           ; 005eb83d
    SAHF                                ; 005eb83f
    JBE 0x005eb861                      ; 005eb840
        ;   XREF to: 005eb861 (CONDITIONAL_JUMP)  ; LAB_005eb861
    MOV EDX,dword ptr [EBP + 0x20]      ; 005eb842
    LEA EAX,[ESP + 0x74]                ; 005eb845
    CMP EAX,EDX                         ; 005eb849
    JZ 0x005eb861                       ; 005eb84b
        ;   XREF to: 005eb861 (CONDITIONAL_JUMP)  ; LAB_005eb861
    MOV EAX,dword ptr [ESP + 0x74]      ; 005eb84d
    MOV dword ptr [EDX],EAX             ; 005eb851
    MOV EAX,dword ptr [ESP + 0x78]      ; 005eb853
    MOV dword ptr [EDX + 0x4],EAX       ; 005eb857
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005eb85a
    MOV dword ptr [EDX + 0x8],EAX       ; 005eb85e
    MOV EAX,dword ptr [ESP + 0x14]      ; 005eb861
        ;   Label: LAB_005eb861
    MOV dword ptr [ESP + 0x80],EAX      ; 005eb865
    MOV EAX,dword ptr [ESP + 0x80]      ; 005eb86c
        ;   Label: LAB_005eb86c
    MOV ESP,EBP                         ; 005eb873
    POP EBP                             ; 005eb875
    POP EDI                             ; 005eb876
    POP ESI                             ; 005eb877
    POP EBX                             ; 005eb878
    RET                                 ; 005eb879
    MOV dword ptr [ESP + 0x80],0x40000000 ; 005eb87a
        ;   Label: LAB_005eb87a
    JMP 0x005eb86c                      ; 005eb885
        ;   XREF to: 005eb86c (UNCONDITIONAL_JUMP)  ; LAB_005eb86c
    FLD float ptr [ESP + 0x10]          ; 005eb887
        ;   Label: LAB_005eb887
    FLDZ                                ; 005eb88b
    FXCH                                ; 005eb88d
    FSTP double ptr [ESP + 0x8]         ; 005eb88f
    FCOMP double ptr [ESP + 0x8]        ; 005eb893
    FNSTSW AX                           ; 005eb897
    SAHF                                ; 005eb899
    JA 0x005eb826                       ; 005eb89a
        ;   XREF to: 005eb826 (CONDITIONAL_JUMP)  ; LAB_005eb826
    FLD1                                ; 005eb89c
    FCOMP double ptr [ESP + 0x8]        ; 005eb89e
    FNSTSW AX                           ; 005eb8a2
    SAHF                                ; 005eb8a4
    JC 0x005eb826                       ; 005eb8a5
        ;   XREF to: 005eb826 (CONDITIONAL_JUMP)  ; LAB_005eb826
    FLD float ptr [ESP + 0x3c]          ; 005eb8ab
    FLD float ptr [ESP + 0x40]          ; 005eb8af
    FLD float ptr [ESP + 0x44]          ; 005eb8b3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005eb8b7
    LEA EDX,[ESP + 0x68]                ; 005eb8bb
    FXCH ST2                            ; 005eb8bf
    FCHS                                ; 005eb8c1
    FXCH                                ; 005eb8c3
    FCHS                                ; 005eb8c5
    FXCH ST2                            ; 005eb8c7
    FCHS                                ; 005eb8c9
    FXCH                                ; 005eb8cb
    FSTP float ptr [ESP + 0x68]         ; 005eb8cd
    FXCH                                ; 005eb8d1
    FSTP float ptr [ESP + 0x6c]         ; 005eb8d3
    MOV dword ptr [ESP + 0x14],EAX      ; 005eb8d7
    LEA EAX,[ESP + 0x74]                ; 005eb8db
    FSTP float ptr [ESP + 0x70]         ; 005eb8df
    CMP EAX,EDX                         ; 005eb8e3
    JZ 0x005eb826                       ; 005eb8e5
        ;   XREF to: 005eb826 (CONDITIONAL_JUMP)  ; LAB_005eb826
    MOV EAX,dword ptr [ESP + 0x68]      ; 005eb8eb
    MOV dword ptr [ESP + 0x74],EAX      ; 005eb8ef
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005eb8f3
    MOV dword ptr [ESP + 0x78],EAX      ; 005eb8f7
    MOV EAX,dword ptr [ESP + 0x70]      ; 005eb8fb
    MOV dword ptr [ESP + 0x7c],EAX      ; 005eb8ff
    JMP 0x005eb826                      ; 005eb903
        ;   XREF to: 005eb826 (UNCONDITIONAL_JUMP)  ; LAB_005eb826

