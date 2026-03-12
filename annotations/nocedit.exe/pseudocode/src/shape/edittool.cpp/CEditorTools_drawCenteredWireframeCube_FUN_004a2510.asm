; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dimensions
; int              Stack[0xc]:4   color_value
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; CVector3f        Stack[-0x1c]:12  local_1c
; CVector3f        Stack[-0x10]:12  local_10
;
; Referenced Globals:
;   float FLOAT_006235ce = 0.5
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a2510
        ;   Label: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510
    MOV EBP,ESP                         ; 004a2511
    SUB ESP,0x24                        ; 004a2513
    MOV EAX,dword ptr [EBP + 0xc]       ; 004a2516
    FLD float ptr [0x006235ce]          ; 004a2519 | FLOAT_006235ce
    FLD float ptr [EAX]                 ; 004a251f
    FMUL ST1                            ; 004a2521
    FSTP float ptr [EBP + -0xc]         ; 004a2523
    FLD float ptr [EAX + 0x4]           ; 004a2526
    FMUL ST1                            ; 004a2529
    FSTP float ptr [EBP + -0x8]         ; 004a252b
    FLD float ptr [EAX + 0x8]           ; 004a252e
    FMUL ST1                            ; 004a2531
    FSTP float ptr [EBP + -0x4]         ; 004a2533
    FLD float ptr [EAX]                 ; 004a2536
    FCHS                                ; 004a2538
    FST float ptr [EBP + -0x24]         ; 004a253a
    FMUL ST1                            ; 004a253d
    FLD float ptr [EAX + 0x4]           ; 004a253f
    FCHS                                ; 004a2542
    FST float ptr [EBP + -0x20]         ; 004a2544
    FMUL ST2                            ; 004a2547
    MOV EDX,dword ptr [EBP + 0x10]      ; 004a2549
    FLD float ptr [EAX + 0x8]           ; 004a254c
    FCHS                                ; 004a254f
    FST float ptr [EBP + -0x1c]         ; 004a2551
    FMULP ST3                           ; 004a2554
    PUSH EDX                            ; 004a2556
    LEA EDX,[EBP + -0xc]                ; 004a2557
    MOV ECX,dword ptr [EBP + 0x8]       ; 004a255a
    PUSH EDX                            ; 004a255d
    LEA EAX,[EBP + -0x18]               ; 004a255e
    FXCH                                ; 004a2561
    FSTP float ptr [EBP + -0x18]        ; 004a2563
    PUSH EAX                            ; 004a2566
    FSTP float ptr [EBP + -0x14]        ; 004a2567
    PUSH ECX                            ; 004a256a
    FSTP float ptr [EBP + -0x10]        ; 004a256b
    CALL shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 ; 004a256e
        ;   XREF to: 004a2050 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools * this_ptr, CVector3f * corner1, CVector3f * corner2, int color_value)
    ADD ESP,0x10                        ; 004a2573
    MOV ESP,EBP                         ; 004a2576
    POP EBP                             ; 004a2578
    RET                                 ; 004a2579

