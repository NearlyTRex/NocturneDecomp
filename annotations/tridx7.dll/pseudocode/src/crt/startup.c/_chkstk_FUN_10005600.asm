; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__chkstk_FUN_10005600(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; Local Variables:
; undefined4       Stack[-0xffc]:4  local_ffc
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   APIDLLInformation at 100019a5
;   crt_io.c__chsize_lk_FUN_1000b560 at 1000b565
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 10005600
        ;   Label: crt_startup.c__chkstk_FUN_10005600
    CMP EAX,0x1000                      ; 10005601
    LEA ECX,[ESP + 0x8]                 ; 10005606
    JC 0x10005620                       ; 1000560a
        ;   XREF to: 10005620 (CONDITIONAL_JUMP)  ; LAB_10005620
    SUB ECX,0x1000                      ; 1000560c
        ;   Label: LAB_1000560c
    SUB EAX,0x1000                      ; 10005612
    TEST dword ptr [ECX],EAX            ; 10005617
    CMP EAX,0x1000                      ; 10005619
    JNC 0x1000560c                      ; 1000561e
        ;   XREF to: 1000560c (CONDITIONAL_JUMP)  ; LAB_1000560c
    SUB ECX,EAX                         ; 10005620
        ;   Label: LAB_10005620
    MOV EAX,ESP                         ; 10005622
    TEST dword ptr [ECX],EAX            ; 10005624
    MOV ESP,ECX                         ; 10005626
    MOV ECX,dword ptr [EAX]             ; 10005628
    MOV EAX,dword ptr [EAX + 0x4]       ; 1000562a
    PUSH EAX                            ; 1000562d
    RET                                 ; 1000562e

