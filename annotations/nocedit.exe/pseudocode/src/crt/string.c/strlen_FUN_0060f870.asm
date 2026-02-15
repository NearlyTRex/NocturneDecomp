; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_strlen_FUN_0060f870(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   crt_process.c_build_cmdline_FUN_00610258 at 00610283
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f4e2
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 at 0060e73b
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0060f870
        ;   Label: crt_string.c_strlen_FUN_0060f870
    MOV EDI,dword ptr [ESP + 0x8]       ; 0060f871
    PUSH ES                             ; 0060f875
    MOV AX,DS                           ; 0060f876
    MOV ES,AX                           ; 0060f878
    SUB ECX,ECX                         ; 0060f87a
    DEC ECX                             ; 0060f87c
    XOR EAX,EAX                         ; 0060f87d
    SCASB.REPNE ES:EDI                  ; 0060f87f
    NOT ECX                             ; 0060f881
    DEC ECX                             ; 0060f883
    POP ES                              ; 0060f884
    MOV EAX,ECX                         ; 0060f885
    POP EDI                             ; 0060f887
    RET                                 ; 0060f888

