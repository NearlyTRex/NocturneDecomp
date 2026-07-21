; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047a210(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047ada7
;
; Referenced Globals:
;   string s_Event_command_parse_error:_0057f397
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a210
        ;   Label: FUN_0047a210
    SUB ESP,0x4                         ; 0047a211
    PUSH 0x57f397                       ; 0047a214 | = "Event command parse error:\n"
    PUSH 0x1c08b60                      ; 0047a219 | DAT_01c08b60
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047a21e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x1c08b60                   ; 0047a223
    ADD ESP,0x8                         ; 0047a228
    ADD EDX,EAX                         ; 0047a22b
    LEA EAX,[ESP + 0x10]                ; 0047a22d
    MOV dword ptr [ESP],EAX             ; 0047a231
    MOV EAX,ESP                         ; 0047a234
    PUSH EAX                            ; 0047a236
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047a237
    PUSH ECX                            ; 0047a23b
    PUSH EDX                            ; 0047a23c
    XOR EBX,EBX                         ; 0047a23d
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0047a23f
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0047a244
    XOR EAX,EAX                         ; 0047a247
    MOV dword ptr [ESP],EBX             ; 0047a249
    ADD ESP,0x4                         ; 0047a24c
    POP EBX                             ; 0047a24f
    RET                                 ; 0047a250

