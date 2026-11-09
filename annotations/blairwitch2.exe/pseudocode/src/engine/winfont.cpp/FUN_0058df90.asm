; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_FUN_0058df90(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   font_name
; int              Stack[0xc]:4   font_height
; int              Stack[0x10]:4   y_offset1
; int              Stack[0x14]:4   y_offset2
;
; XREF[1]:
;   core_dfont.cpp_FUN_00447ea0 at 0044849f
;
; Referenced Globals:
;   void* PTR_CreateFontA_005c8400 = 001c87fc
;   undefined1* PTR_engine_winfont.cpp_CWinFont_dtor_FUN_0058e050_005fe274 = 0058e050
;
; Called Functions:
;   CreateFontA
;   unkafter_npc.cpp_FUN_00510ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058df90
        ;   Label: engine_winfont.cpp_FUN_0058df90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058df91
    PUSH EDX                            ; 0058df95
    CALL unkafter_npc.cpp_FUN_00510ca0  ; 0058df96
        ;   XREF to: 00510ca0 (UNCONDITIONAL_CALL)  ; undefined unkafter_npc.cpp_FUN_00510ca0()
    ADD ESP,0x4                         ; 0058df9b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058df9e
    PUSH ECX                            ; 0058dfa2
    PUSH 0x0                            ; 0058dfa3
    PUSH 0x0                            ; 0058dfa5
    MOV dword ptr [EAX + 0x6a44],0x5fe274 ; 0058dfa7 | PTR_engine_winfont.cpp_CWinFont_dtor_FUN_0058e050_005fe274
    PUSH 0x0                            ; 0058dfb1
    MOV dword ptr [EAX + 0x6a48],0x0    ; 0058dfb3
    PUSH 0x0                            ; 0058dfbd
    MOV dword ptr [EAX + 0x6a50],0x0    ; 0058dfbf
    PUSH 0x1                            ; 0058dfc9
    MOV dword ptr [EAX + 0x6a54],0x0    ; 0058dfcb
    PUSH 0x0                            ; 0058dfd5
    MOV dword ptr [EAX + 0x6a58],0x0    ; 0058dfd7
    PUSH 0x0                            ; 0058dfe1
    MOV dword ptr [EAX + 0x6b64],0x0    ; 0058dfe3
    PUSH 0x0                            ; 0058dfed
    MOV dword ptr [EAX + 0x6b68],0x0    ; 0058dfef
    PUSH 0x190                          ; 0058dff9
    MOV dword ptr [EAX + 0x6b6c],0x0    ; 0058dffe
    PUSH 0x0                            ; 0058e008
    MOV EBX,EAX                         ; 0058e00a
    MOV dword ptr [EAX + 0x6b70],0x0    ; 0058e00c
    PUSH 0x0                            ; 0058e016
    MOV dword ptr [EAX + 0x6b74],0x0    ; 0058e018
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058e022
    PUSH 0x0                            ; 0058e026
    NEG EAX                             ; 0058e028
    PUSH EAX                            ; 0058e02a
    CALL dword ptr CS:[0x5c8400]        ; 0058e02b | PTR_CreateFontA_005c8400
    MOV dword ptr [EBX + 0x6a50],EAX    ; 0058e032
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058e038
    MOV dword ptr [EBX + 0x6b78],EAX    ; 0058e03c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058e042
    MOV dword ptr [EBX + 0x6b7c],EAX    ; 0058e046
    MOV EAX,EBX                         ; 0058e04c
    POP EBX                             ; 0058e04e
    RET                                 ; 0058e04f

