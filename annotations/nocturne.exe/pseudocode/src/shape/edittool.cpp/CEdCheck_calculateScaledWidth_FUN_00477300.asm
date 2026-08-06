; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370 at 00477375
;   shape_edittool.cpp_CEdCheck_render_FUN_00477390 at 004773bf
;   shape_edittool.cpp_FUN_004771f0 at 00477278
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477300
        ;   Label: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300
    MOV EDX,dword ptr [ESP + 0x8]       ; 00477301
    PUSH EDX                            ; 00477305
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340 ; 00477306
        ;   XREF to: 00477340 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340(CEdCheck * this_ptr)
    IMUL EAX,dword ptr [0x005b761c]     ; 0047730b | g_WindowWidth
    LEA EDX,[EAX*0x4 + 0x0]             ; 00477312
    SUB EDX,EAX                         ; 00477319
    MOV EAX,EDX                         ; 0047731b
    SAR EDX,0x1f                        ; 0047731d
    SHL EDX,0x2                         ; 00477320
    SBB EAX,EDX                         ; 00477323
    SAR EAX,0x2                         ; 00477325
    MOV EDX,EAX                         ; 00477328
    MOV EBX,dword ptr [0x005b7620]      ; 0047732a | g_WindowHeight
    SAR EDX,0x1f                        ; 00477330
    ADD ESP,0x4                         ; 00477333
    IDIV EBX                            ; 00477336
    POP EBX                             ; 00477338
    RET                                 ; 00477339

