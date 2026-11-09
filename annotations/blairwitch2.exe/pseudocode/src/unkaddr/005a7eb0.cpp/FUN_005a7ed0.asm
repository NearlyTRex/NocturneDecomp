; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkaddr_005a7eb0_cpp_FUN_005a7ed0(void)
;
;
; XREF[9]:
;   core_confedrt.cpp_FUN_005a0bd0 at 005a0cc2
;   core_doc.cpp_FUN_00450c60 at 00451695
;   core_hag.cpp_FUN_005aae80 at 005aaf77
;   core_hag.cpp_FUN_005ab260 at 005ab4c4
;   core_partibox.cpp_FUN_005ac960 at 005aca3e
;   core_robin.cpp_FUN_005a61f0 at 005a6353
;   core_spirmine.cpp_FUN_005ad530 at 005ad7c8
;   unkafter_basicene.cpp_FUN_005a0380 at 005a0470
;   unkafter_cross.cpp_FUN_005a6ed0 at 005a7038
;
; Referenced Globals:
;   undefined4 DAT_0061ec60
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 005a7ed0
        ;   Label: unkaddr_005a7eb0.cpp_FUN_005a7ed0
    PUSH 0x0                            ; 005a7ed5
    CALL core_actor.cpp_FUN_0040cfc0    ; 005a7ed7
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    MOV EDX,dword ptr [0x0061ec60]      ; 005a7edc | DAT_0061ec60
    ADD ESP,0x8                         ; 005a7ee2
    CMP EAX,EDX                         ; 005a7ee5
    SETL AL                             ; 005a7ee7
    AND EAX,0xff                        ; 005a7eea
    RET                                 ; 005a7eef

