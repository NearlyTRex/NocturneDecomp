; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b2d90(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005b2e00 at 005b2fd4
;
; Referenced Globals:
;   void* PTR_CreateWindowExA_005d04a8 = 001d0a8c
;   void* PTR_ExitProcess_005d0544 = 001d0d10
;   TerminatedCString s_Nocturne_005f9e9d
;   TerminatedCString s_Nocturne_005f9ea6
;   void* PTR_s_Nocturne_006260dc = 005f9e9d
;   void* PTR_s_Nocturne_006260e0 = 005f9ea6
;   undefined4 DAT_02c9be68
;   undefined4 DAT_02c9be6c
;
; Called Functions:
;   CreateWindowExA
;   ExitProcess
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2d90
        ;   Label: wincore_winrun.cpp_FUN_005b2d90
    PUSH 0x0                            ; 005b2d91
    MOV EDX,dword ptr [0x02c9be6c]      ; 005b2d93 | DAT_02c9be6c
    PUSH EDX                            ; 005b2d99
    PUSH 0x0                            ; 005b2d9a
    PUSH 0x0                            ; 005b2d9c
    PUSH 0x0                            ; 005b2d9e
    PUSH 0x0                            ; 005b2da0
    PUSH 0x0                            ; 005b2da2
    PUSH 0x0                            ; 005b2da4
    PUSH 0x80000000                     ; 005b2da6
    MOV ECX,dword ptr [0x006260e0]      ; 005b2dab | PTR_s_Nocturne_006260e0
    PUSH ECX                            ; 005b2db1 | = "Nocturne"
    MOV EBX,dword ptr [0x006260dc]      ; 005b2db2 | PTR_s_Nocturne_006260dc
    PUSH EBX                            ; 005b2db8 | = "Nocturne"
    PUSH 0x40000                        ; 005b2db9
    CALL dword ptr CS:[0x5d04a8]        ; 005b2dbe | PTR_CreateWindowExA_005d04a8
    MOV [0x02c9be68],EAX                ; 005b2dc5 | DAT_02c9be68
    TEST EAX,EAX                        ; 005b2dca
    JZ 0x005b2dd0                       ; 005b2dcc
        ;   XREF to: 005b2dd0 (CONDITIONAL_JUMP)  ; LAB_005b2dd0
    POP EBX                             ; 005b2dce
    RET                                 ; 005b2dcf
    PUSH 0x1                            ; 005b2dd0
        ;   Label: LAB_005b2dd0
    CALL dword ptr CS:[0x5d0544]        ; 005b2dd2 | PTR_ExitProcess_005d0544

