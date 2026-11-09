; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0047db40(CEditorTools *this_ptr,char *message_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message_text
;
; XREF[3]:
;   core_dtrace.cpp_FUN_004725fe at 00472617
;   core_netgame.cpp_FUN_0050b8d0 at 0050b951
;   engine_pod.cpp_FUN_0051aa7e at 0051abd5
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_006141b8
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_font.cpp_FUN_004aaf00
;   engine_font.cpp_FUN_004ab560
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;   shape_edittool.cpp_FUN_0047dc40
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047db40
        ;   Label: shape_edittool.cpp_FUN_0047db40
    PUSH ESI                            ; 0047db41
    PUSH EDI                            ; 0047db42
    PUSH EBP                            ; 0047db43
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047db44
    CMP dword ptr [0x01c25590],0x0      ; 0047db48 | DAT_01c25590
    JNZ 0x0047db74                      ; 0047db4f
        ;   XREF to: 0047db74 (CONDITIONAL_JUMP)  ; LAB_0047db74
    MOV ECX,0x5d1e6f                    ; 0047db51 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa0                        ; 0047db56
    PUSH 0x5d1e85                       ; 0047db5b | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047db60 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047db66 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047db6c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047db71
    MOV EAX,[0x01c25590]                ; 0047db74 | DAT_01c25590
        ;   Label: LAB_0047db74
    PUSH 0x6a                           ; 0047db79
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0047db7b
    PUSH EAX                            ; 0047db81
    MOV dword ptr [0x01c25f78],EBX      ; 0047db82 | DAT_01c25f78
    CALL engine_font.cpp_FUN_004ab560   ; 0047db88
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV [0x01c25f7c],EAX                ; 0047db8d | DAT_01c25f7c
    MOV EAX,[0x006141b8]                ; 0047db92 | DAT_006141b8
    MOV EDX,EAX                         ; 0047db97
    SAR EDX,0x1f                        ; 0047db99
    SUB EAX,EDX                         ; 0047db9c
    SAR EAX,0x1                         ; 0047db9e
    ADD ESP,0x8                         ; 0047dba0
    MOV EBX,EAX                         ; 0047dba3
    TEST ESI,ESI                        ; 0047dba5
    JNZ 0x0047dc0d                      ; 0047dba7
        ;   XREF to: 0047dc0d (CONDITIONAL_JUMP)  ; LAB_0047dc0d
    PUSH 0x0                            ; 0047dba9
        ;   Label: LAB_0047dba9
    PUSH ESI                            ; 0047dbab
    MOV ESI,dword ptr [0x01c25f7c]      ; 0047dbac | DAT_01c25f7c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0047dbb2
    SUB EAX,ESI                         ; 0047dbb9
    ADD EAX,EAX                         ; 0047dbbb
    PUSH EAX                            ; 0047dbbd
    PUSH EBX                            ; 0047dbbe
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047dbbf
    PUSH EAX                            ; 0047dbc3
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 0047dbc4
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047dbc9
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0047dbcc
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV ESI,EAX                         ; 0047dbd1
    MOV EAX,[0x01c2559c]                ; 0047dbd3 | DAT_01c2559c
    DEC EAX                             ; 0047dbd8
    SHL EAX,0x3                         ; 0047dbd9
    PUSH 0x3f800000                     ; 0047dbdc
    MOV EBX,EAX                         ; 0047dbe1
    SHL EAX,0x6                         ; 0047dbe3
    MOV EDX,0xffffffff                  ; 0047dbe6
    SUB EAX,EBX                         ; 0047dbeb
    PUSH 0x0                            ; 0047dbed
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047dbef
    MOV dword ptr [EAX + 0x1c2578c],ESI ; 0047dbf3
    PUSH ECX                            ; 0047dbf9
    MOV dword ptr [EAX + 0x1c25790],EDX ; 0047dbfa
    CALL shape_edittool.cpp_FUN_0047dc40 ; 0047dc00
        ;   XREF to: 0047dc40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047dc40()
    ADD ESP,0xc                         ; 0047dc05
    POP EBP                             ; 0047dc08
    POP EDI                             ; 0047dc09
    POP ESI                             ; 0047dc0a
    POP EBX                             ; 0047dc0b
    RET                                 ; 0047dc0c
    PUSH ESI                            ; 0047dc0d
        ;   Label: LAB_0047dc0d
    MOV EDI,dword ptr [0x01c25590]      ; 0047dc0e | DAT_01c25590
    PUSH EDI                            ; 0047dc14
    CALL engine_font.cpp_FUN_004aaf00   ; 0047dc15
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 0047dc1a
    CMP EBX,EAX                         ; 0047dc1d
    JGE 0x0047dba9                      ; 0047dc1f
        ;   XREF to: 0047dba9 (CONDITIONAL_JUMP)  ; LAB_0047dba9
    PUSH ESI                            ; 0047dc21
    MOV EBP,dword ptr [0x01c25590]      ; 0047dc22 | DAT_01c25590
    PUSH EBP                            ; 0047dc28
    CALL engine_font.cpp_FUN_004aaf00   ; 0047dc29
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 0047dc2e
    MOV EBX,EAX                         ; 0047dc31
    JMP 0x0047dba9                      ; 0047dc33
        ;   XREF to: 0047dba9 (UNCONDITIONAL_JUMP)  ; LAB_0047dba9

