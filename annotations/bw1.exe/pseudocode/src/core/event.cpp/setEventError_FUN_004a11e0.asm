; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_setEventError_FUN_004a11e0(char *source_file,int source_line,char *error_message)
;
; Parameters:
; char *           Stack[0x4]:4   source_file
; int              Stack[0x8]:4   source_line
; char *           Stack[0xc]:4   error_message
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a11e0
        ;   Label: core_event.cpp_setEventError_FUN_004a11e0
    PUSH EDI                            ; 004a11e1
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a11e2
    MOV EDI,0x1c56ed0                   ; 004a11e6
    PUSH EDI                            ; 004a11eb
    MOV AL,byte ptr [ESI]               ; 004a11ec
        ;   Label: LAB_004a11ec
    MOV byte ptr [EDI],AL               ; 004a11ee
    CMP AL,0x0                          ; 004a11f0
    JZ 0x004a1204                       ; 004a11f2
        ;   XREF to: 004a1204 (CONDITIONAL_JUMP)  ; LAB_004a1204
    MOV AL,byte ptr [ESI + 0x1]         ; 004a11f4
    ADD ESI,0x2                         ; 004a11f7
    MOV byte ptr [EDI + 0x1],AL         ; 004a11fa
    ADD EDI,0x2                         ; 004a11fd
    CMP AL,0x0                          ; 004a1200
    JNZ 0x004a11ec                      ; 004a1202
        ;   XREF to: 004a11ec (CONDITIONAL_JUMP)  ; LAB_004a11ec
    POP EDI                             ; 004a1204
        ;   Label: LAB_004a1204
    MOV EAX,0xffffffff                  ; 004a1205
    POP EDI                             ; 004a120a
    POP ESI                             ; 004a120b
    RET                                 ; 004a120c

