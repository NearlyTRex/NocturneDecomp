; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0(CBoundingBox3D *this_ptr,int point_count,CVector3f *points)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   point_count
; CVector3f *      Stack[0xc]:4   points
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d9d0
        ;   Label: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0
    PUSH ESI                            ; 0041d9d1
    PUSH EDI                            ; 0041d9d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041d9d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0041d9d7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0041d9db
    LEA ECX,[EDX + 0xc]                 ; 0041d9df
    MOV EBX,ECX                         ; 0041d9e2
    CMP ECX,EAX                         ; 0041d9e4
    JNZ 0x0041da54                      ; 0041d9e6
        ;   XREF to: 0041da54 (CONDITIONAL_JUMP)  ; LAB_0041da54
    CMP EDX,EBX                         ; 0041d9ec
        ;   Label: LAB_0041d9ec
    JZ 0x0041da00                       ; 0041d9ee
        ;   XREF to: 0041da00 (CONDITIONAL_JUMP)  ; LAB_0041da00
    MOV ECX,dword ptr [EBX]             ; 0041d9f0
    MOV dword ptr [EDX],ECX             ; 0041d9f2
    MOV ECX,dword ptr [EBX + 0x4]       ; 0041d9f4
    MOV dword ptr [EDX + 0x4],ECX       ; 0041d9f7
    MOV ECX,dword ptr [EBX + 0x8]       ; 0041d9fa
    MOV dword ptr [EDX + 0x8],ECX       ; 0041d9fd
    MOV ESI,0x1                         ; 0041da00
        ;   Label: LAB_0041da00
    CMP EDI,ESI                         ; 0041da05
    JLE 0x0041da50                      ; 0041da07
        ;   XREF to: 0041da50 (CONDITIONAL_JUMP)  ; LAB_0041da50
    LEA EBX,[EAX + 0xc]                 ; 0041da09
    FLD float ptr [EBX]                 ; 0041da0c
        ;   Label: LAB_0041da0c
    MOV ECX,EBX                         ; 0041da0e
    FCOMP float ptr [EDX]               ; 0041da10
    FNSTSW AX                           ; 0041da12
    SAHF                                ; 0041da14
    JC 0x0041da66                       ; 0041da15
        ;   XREF to: 0041da66 (CONDITIONAL_JUMP)  ; LAB_0041da66
    FLD float ptr [EBX]                 ; 0041da17
    FCOMP float ptr [EDX + 0xc]         ; 0041da19
    FNSTSW AX                           ; 0041da1c
    SAHF                                ; 0041da1e
    JBE 0x0041da26                      ; 0041da1f
        ;   XREF to: 0041da26 (CONDITIONAL_JUMP)  ; LAB_0041da26
    MOV EAX,dword ptr [EBX]             ; 0041da21
    MOV dword ptr [EDX + 0xc],EAX       ; 0041da23
    FLD float ptr [ECX + 0x4]           ; 0041da26
        ;   Label: LAB_0041da26
    FCOMP float ptr [EDX + 0x4]         ; 0041da29
    FNSTSW AX                           ; 0041da2c
    SAHF                                ; 0041da2e
    JNC 0x0041da6c                      ; 0041da2f
        ;   XREF to: 0041da6c (CONDITIONAL_JUMP)  ; LAB_0041da6c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041da31
    MOV dword ptr [EDX + 0x4],EAX       ; 0041da34
    FLD float ptr [ECX + 0x8]           ; 0041da37
        ;   Label: LAB_0041da37
    FCOMP float ptr [EDX + 0x8]         ; 0041da3a
    FNSTSW AX                           ; 0041da3d
    SAHF                                ; 0041da3f
    JNC 0x0041da7f                      ; 0041da40
        ;   XREF to: 0041da7f (CONDITIONAL_JUMP)  ; LAB_0041da7f
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041da42
    MOV dword ptr [EDX + 0x8],EAX       ; 0041da45
    INC ESI                             ; 0041da48
        ;   Label: LAB_0041da48
    ADD EBX,0xc                         ; 0041da49
    CMP ESI,EDI                         ; 0041da4c
    JL 0x0041da0c                       ; 0041da4e
        ;   XREF to: 0041da0c (CONDITIONAL_JUMP)  ; LAB_0041da0c
    POP EDI                             ; 0041da50
        ;   Label: LAB_0041da50
    POP ESI                             ; 0041da51
    POP EBX                             ; 0041da52
    RET                                 ; 0041da53
    MOV ESI,dword ptr [EAX]             ; 0041da54
        ;   Label: LAB_0041da54
    MOV dword ptr [ECX],ESI             ; 0041da56
    MOV ESI,dword ptr [EAX + 0x4]       ; 0041da58
    MOV dword ptr [ECX + 0x4],ESI       ; 0041da5b
    MOV ESI,dword ptr [EAX + 0x8]       ; 0041da5e
    MOV dword ptr [ECX + 0x8],ESI       ; 0041da61
    JMP 0x0041d9ec                      ; 0041da64
        ;   XREF to: 0041d9ec (UNCONDITIONAL_JUMP)  ; LAB_0041d9ec
    MOV EAX,dword ptr [EBX]             ; 0041da66
        ;   Label: LAB_0041da66
    MOV dword ptr [EDX],EAX             ; 0041da68
    JMP 0x0041da26                      ; 0041da6a
        ;   XREF to: 0041da26 (UNCONDITIONAL_JUMP)  ; LAB_0041da26
    FLD float ptr [ECX + 0x4]           ; 0041da6c
        ;   Label: LAB_0041da6c
    FCOMP float ptr [EDX + 0x10]        ; 0041da6f
    FNSTSW AX                           ; 0041da72
    SAHF                                ; 0041da74
    JBE 0x0041da37                      ; 0041da75
        ;   XREF to: 0041da37 (CONDITIONAL_JUMP)  ; LAB_0041da37
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041da77
    MOV dword ptr [EDX + 0x10],EAX      ; 0041da7a
    JMP 0x0041da37                      ; 0041da7d
        ;   XREF to: 0041da37 (UNCONDITIONAL_JUMP)  ; LAB_0041da37
    FLD float ptr [ECX + 0x8]           ; 0041da7f
        ;   Label: LAB_0041da7f
    FCOMP float ptr [EDX + 0x14]        ; 0041da82
    FNSTSW AX                           ; 0041da85
    SAHF                                ; 0041da87
    JBE 0x0041da48                      ; 0041da88
        ;   XREF to: 0041da48 (CONDITIONAL_JUMP)  ; LAB_0041da48
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041da8a
    MOV dword ptr [EDX + 0x14],EAX      ; 0041da8d
    INC ESI                             ; 0041da90
    ADD EBX,0xc                         ; 0041da91
    CMP ESI,EDI                         ; 0041da94
    JL 0x0041da0c                       ; 0041da96
        ;   XREF to: 0041da0c (CONDITIONAL_JUMP)  ; LAB_0041da0c
    POP EDI                             ; 0041da9c
    POP ESI                             ; 0041da9d
    POP EBX                             ; 0041da9e
    RET                                 ; 0041da9f

