; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_0044beb0(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 at 0044bda4
;
; Referenced Globals:
;   TerminatedCString s_unnamed_0057bed8
;   undefined4 s_nnamed_0057bed8+1
;   undefined4 s_named_0057bed8+2
;   undefined4 s_amed_0057bed8+3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044beb0
        ;   Label: core_dfilter.cpp_CDemonFilter_ctor_FUN_0044beb0
    PUSH EDI                            ; 0044beb1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044beb2
    MOV dword ptr [EDX + 0x48],0x0      ; 0044beb6
    MOV ESI,0x57bed8                    ; 0044bebd | = "unnamed"
    MOV dword ptr [EDX],0x40            ; 0044bec2
    LEA EDI,[EDX + 0x8]                 ; 0044bec8
    MOV dword ptr [EDX + 0x4],0x40      ; 0044becb
    PUSH EDI                            ; 0044bed2
    MOV AL,byte ptr [ESI]               ; 0044bed3 | = "unnamed" | s_named_0057bed8+2
        ;   Label: LAB_0044bed3
    MOV byte ptr [EDI],AL               ; 0044bed5
    CMP AL,0x0                          ; 0044bed7
    JZ 0x0044beeb                       ; 0044bed9
        ;   XREF to: 0044beeb (CONDITIONAL_JUMP)  ; LAB_0044beeb
    MOV AL,byte ptr [ESI + 0x1]         ; 0044bedb | s_nnamed_0057bed8+1 | s_amed_0057bed8+3
    ADD ESI,0x2                         ; 0044bede
    MOV byte ptr [EDI + 0x1],AL         ; 0044bee1
    ADD EDI,0x2                         ; 0044bee4
    CMP AL,0x0                          ; 0044bee7
    JNZ 0x0044bed3                      ; 0044bee9
        ;   XREF to: 0044bed3 (CONDITIONAL_JUMP)  ; LAB_0044bed3
    POP EDI                             ; 0044beeb
        ;   Label: LAB_0044beeb
    MOV EAX,EDX                         ; 0044beec
    POP EDI                             ; 0044beee
    POP ESI                             ; 0044beef
    RET                                 ; 0044bef0

