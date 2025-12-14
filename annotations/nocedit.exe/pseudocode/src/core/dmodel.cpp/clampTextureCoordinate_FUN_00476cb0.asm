; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0(float * value)
;
; Parameters:
; float *          Stack[0x4]:4   value
;
; Referenced Globals:
;   double DOUBLE_0061f2db = 255.999000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476cb0
        ;   Label: core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0
    FLD float ptr [EDX]                 ; 00476cb4
    FLDZ                                ; 00476cb6
    FCOMPP                              ; 00476cb8
    FNSTSW AX                           ; 00476cba
    SAHF                                ; 00476cbc
    JA 0x00476ccd                       ; 00476cbd
        ;   XREF to: 00476ccd (CONDITIONAL_JUMP)  ; LAB_00476ccd
    FLD float ptr [EDX]                 ; 00476cbf
    FCOMP double ptr [0x0061f2db]       ; 00476cc1 | DOUBLE_0061f2db
    FNSTSW AX                           ; 00476cc7
    SAHF                                ; 00476cc9
    JA 0x00476ce1                       ; 00476cca
        ;   XREF to: 00476ce1 (CONDITIONAL_JUMP)  ; LAB_00476ce1
    RET                                 ; 00476ccc
    MOV dword ptr [EDX],0x0             ; 00476ccd
        ;   Label: LAB_00476ccd
    FLD float ptr [EDX]                 ; 00476cd3
    FCOMP double ptr [0x0061f2db]       ; 00476cd5 | DOUBLE_0061f2db
    FNSTSW AX                           ; 00476cdb
    SAHF                                ; 00476cdd
    JA 0x00476ce1                       ; 00476cde
        ;   XREF to: 00476ce1 (CONDITIONAL_JUMP)  ; LAB_00476ce1
    RET                                 ; 00476ce0
    MOV dword ptr [EDX],0x437fffbe      ; 00476ce1
        ;   Label: LAB_00476ce1
    RET                                 ; 00476ce7

