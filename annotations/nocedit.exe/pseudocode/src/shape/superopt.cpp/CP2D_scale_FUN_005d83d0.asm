; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP2D * __stackdbl_esi shape_superopt_cpp_CP2D_scale_FUN_005d83d0(CP2D *this_ptr,double scale,CP2D *result)
;
; Parameters:
; CP2D *           Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   scale
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d83d0
        ;   Label: shape_superopt.cpp_CP2D_scale_FUN_005d83d0
    PUSH EBP                            ; 005d83d1
    MOV EBP,ESP                         ; 005d83d2
    SUB ESP,0x10                        ; 005d83d4
    AND ESP,0xfffffff8                  ; 005d83d7
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d83da
    MOV EAX,ESI                         ; 005d83dd
    FLD double ptr [EBP + 0x10]         ; 005d83df
    FLD double ptr [EDX]                ; 005d83e2
    FMUL ST1                            ; 005d83e4
    FLD double ptr [EDX + 0x8]          ; 005d83e6
    FMULP ST2                           ; 005d83e9
    MOV EDI,ESI                         ; 005d83eb
    MOV ESI,ESP                         ; 005d83ed
    FXCH                                ; 005d83ef
    FSTP double ptr [ESP + 0x8]         ; 005d83f1
    FSTP double ptr [ESP]               ; 005d83f5
    JMP 0x00604ea5                      ; 005d83f8
        ;   XREF to: 00604ea5 (UNCONDITIONAL_JUMP)  ; LAB_00604ea5
    POP EBP                             ; 005d83fe
        ;   Label: LAB_005d83fe
    POP EDI                             ; 005d83ff
    RET                                 ; 005d8400
    MOV ECX,dword ptr [ESI]             ; 00604ea5
        ;   Label: LAB_00604ea5
    MOV dword ptr [EDI],ECX             ; 00604ea7
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604ea9
    MOV dword ptr [EDI + 0x4],ECX       ; 00604eac
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604eaf
    MOV dword ptr [EDI + 0x8],ECX       ; 00604eb2
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604eb5
    MOV dword ptr [EDI + 0xc],ECX       ; 00604eb8
    ADD ESI,0x10                        ; 00604ebb
    ADD EDI,0x10                        ; 00604ebe
    MOV ESP,EBP                         ; 00604ec1
    JMP 0x005d83fe                      ; 00604ec3
        ;   XREF to: 005d83fe (UNCONDITIONAL_JUMP)  ; LAB_005d83fe

