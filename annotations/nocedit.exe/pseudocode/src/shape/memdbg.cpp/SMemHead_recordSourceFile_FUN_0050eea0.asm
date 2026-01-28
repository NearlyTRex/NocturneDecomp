; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *header,char *source_filename)
;
; Parameters:
; SMemHead *       Stack[0x4]:4   header
; char *           Stack[0x8]:4   source_filename
;
; XREF[3]:
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350 at 0050f404
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250 at 0050f2fc
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f665
;
; Referenced Globals:
;   TerminatedCString s_unknown_00635ded
;   undefined4 s_unknown)_00635dee
;   undefined4 s_nknown)_00635def
;   undefined4 s_known)_00635df0
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005ff178
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0050eea0
        ;   Label: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050eea1
    MOV EDI,dword ptr [ESP + 0x8]       ; 0050eea5
    ADD EDI,0xc                         ; 0050eea9
    TEST EAX,EAX                        ; 0050eeac
    JNZ 0x0050eed3                      ; 0050eeae
        ;   XREF to: 0050eed3 (CONDITIONAL_JUMP)  ; LAB_0050eed3
    PUSH ESI                            ; 0050eeb0
    MOV ESI,0x635ded                    ; 0050eeb1 | = "(unknown)"
    PUSH EDI                            ; 0050eeb6
    MOV AL,byte ptr [ESI]               ; 0050eeb7 | = "(unknown)" | s_nknown)_00635def
        ;   Label: LAB_0050eeb7
    MOV byte ptr [EDI],AL               ; 0050eeb9
    CMP AL,0x0                          ; 0050eebb
    JZ 0x0050eecf                       ; 0050eebd
        ;   XREF to: 0050eecf (CONDITIONAL_JUMP)  ; LAB_0050eecf
    MOV AL,byte ptr [ESI + 0x1]         ; 0050eebf | s_unknown)_00635dee | s_known)_00635df0
    ADD ESI,0x2                         ; 0050eec2
    MOV byte ptr [EDI + 0x1],AL         ; 0050eec5
    ADD EDI,0x2                         ; 0050eec8
    CMP AL,0x0                          ; 0050eecb
    JNZ 0x0050eeb7                      ; 0050eecd
        ;   XREF to: 0050eeb7 (CONDITIONAL_JUMP)  ; LAB_0050eeb7
    POP EDI                             ; 0050eecf
        ;   Label: LAB_0050eecf
    POP ESI                             ; 0050eed0
    POP EDI                             ; 0050eed1
    RET                                 ; 0050eed2
    PUSH 0x0                            ; 0050eed3
        ;   Label: LAB_0050eed3
    PUSH EDI                            ; 0050eed5
    PUSH 0x0                            ; 0050eed6
    PUSH 0x0                            ; 0050eed8
    PUSH EAX                            ; 0050eeda
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0050eedb
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0050eee0
    POP EDI                             ; 0050eee3
    RET                                 ; 0050eee4

