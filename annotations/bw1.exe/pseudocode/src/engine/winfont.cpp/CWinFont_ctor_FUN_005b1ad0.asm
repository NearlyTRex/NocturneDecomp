; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_ctor_FUN_005b1ad0(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   font_name
; int              Stack[0xc]:4   font_height
; int              Stack[0x10]:4   y_offset1
; int              Stack[0x14]:4   y_offset2
;
; XREF[1]:
;   core_dfont.cpp_FUN_0045e000 at 0045e5ff
;
; Referenced Globals:
;   void* PTR_CreateFontA_005d040c = 001d0814
;   undefined1* PTR_engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90_00608164 = 005b1b90
;
; Called Functions:
;   core_npc.cpp_FUN_00531eb0
;   CreateFontA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1ad0
        ;   Label: engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b1ad1
    PUSH EDX                            ; 005b1ad5
    CALL core_npc.cpp_FUN_00531eb0      ; 005b1ad6
        ;   XREF to: 00531eb0 (UNCONDITIONAL_CALL)  ; CFont * core_npc.cpp_FUN_00531eb0(CFont * this_ptr)
    ADD ESP,0x4                         ; 005b1adb
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b1ade
    PUSH ECX                            ; 005b1ae2
    PUSH 0x0                            ; 005b1ae3
    PUSH 0x0                            ; 005b1ae5
    MOV dword ptr [EAX + 0x6a44],0x608164 ; 005b1ae7 | PTR_engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90_00608164
    PUSH 0x0                            ; 005b1af1
    MOV dword ptr [EAX + 0x6a48],0x0    ; 005b1af3
    PUSH 0x0                            ; 005b1afd
    MOV dword ptr [EAX + 0x6a50],0x0    ; 005b1aff
    PUSH 0x1                            ; 005b1b09
    MOV dword ptr [EAX + 0x6a54],0x0    ; 005b1b0b
    PUSH 0x0                            ; 005b1b15
    MOV dword ptr [EAX + 0x6a58],0x0    ; 005b1b17
    PUSH 0x0                            ; 005b1b21
    MOV dword ptr [EAX + 0x6b64],0x0    ; 005b1b23
    PUSH 0x0                            ; 005b1b2d
    MOV dword ptr [EAX + 0x6b68],0x0    ; 005b1b2f
    PUSH 0x190                          ; 005b1b39
    MOV dword ptr [EAX + 0x6b6c],0x0    ; 005b1b3e
    PUSH 0x0                            ; 005b1b48
    MOV EBX,EAX                         ; 005b1b4a
    MOV dword ptr [EAX + 0x6b70],0x0    ; 005b1b4c
    PUSH 0x0                            ; 005b1b56
    MOV dword ptr [EAX + 0x6b74],0x0    ; 005b1b58
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b1b62
    PUSH 0x0                            ; 005b1b66
    NEG EAX                             ; 005b1b68
    PUSH EAX                            ; 005b1b6a
    CALL dword ptr CS:[0x5d040c]        ; 005b1b6b | PTR_CreateFontA_005d040c
    MOV dword ptr [EBX + 0x6a50],EAX    ; 005b1b72
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b1b78
    MOV dword ptr [EBX + 0x6b78],EAX    ; 005b1b7c
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b1b82
    MOV dword ptr [EBX + 0x6b7c],EAX    ; 005b1b86
    MOV EAX,EBX                         ; 005b1b8c
    POP EBX                             ; 005b1b8e
    RET                                 ; 005b1b8f

