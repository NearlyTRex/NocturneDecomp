; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter * this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 at 004700eb
;
; Referenced Globals:
;   TerminatedCString s_unnamed_0061e541
;   undefined4 s_nnamed_0061e542
;   undefined4 s_named_0061e543
;   undefined4 s_amed_0061e544
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004701f0
        ;   Label: core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
    PUSH EDI                            ; 004701f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004701f2
    MOV dword ptr [EDX + 0x48],0x0      ; 004701f6
    MOV ESI,0x61e541                    ; 004701fd | = "unnamed" | s_unnamed_0061e541 = unnamed
    MOV dword ptr [EDX],0x40            ; 00470202
    LEA EDI,[EDX + 0x8]                 ; 00470208
    MOV dword ptr [EDX + 0x4],0x40      ; 0047020b
    PUSH EDI                            ; 00470212
    MOV AL,byte ptr [ESI]               ; 00470213 | = "unnamed" | s_unnamed_0061e541 = unnamed
        ;   Label: LAB_00470213
    MOV byte ptr [EDI],AL               ; 00470215
    CMP AL,0x0                          ; 00470217
    JZ 0x0047022b                       ; 00470219 | LAB_0047022b
        ;   XREF to: 0047022b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0047021b | s_nnamed_0061e542
    ADD ESI,0x2                         ; 0047021e
    MOV byte ptr [EDI + 0x1],AL         ; 00470221
    ADD EDI,0x2                         ; 00470224
    CMP AL,0x0                          ; 00470227
    JNZ 0x00470213                      ; 00470229 | LAB_00470213
        ;   XREF to: 00470213 (CONDITIONAL_JUMP)
    POP EDI                             ; 0047022b
        ;   Label: LAB_0047022b
    MOV EAX,EDX                         ; 0047022c
    POP EDI                             ; 0047022e
    POP ESI                             ; 0047022f
    RET                                 ; 00470230

