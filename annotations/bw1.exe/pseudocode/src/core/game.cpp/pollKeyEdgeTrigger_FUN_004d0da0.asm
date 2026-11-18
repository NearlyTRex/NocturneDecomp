; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004d0da0(int key_index,uint *out_state)
;
; Parameters:
; int              Stack[0x4]:4   key_index
; uint *           Stack[0x8]:4   out_state
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d0da0
        ;   Label: core_game.cpp_pollKeyEdgeTrigger_FUN_004d0da0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d0da4
    MOV AL,byte ptr [EDX + 0x1ccff98]   ; 004d0da8
    CMP AL,byte ptr [EDX + 0x1c50950]   ; 004d0dae
    JZ 0x004d0dc1                       ; 004d0db4
        ;   XREF to: 004d0dc1 (CONDITIONAL_JUMP)  ; LAB_004d0dc1
    XOR EAX,EAX                         ; 004d0db6
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004d0db8
    MOV dword ptr [ECX],EAX             ; 004d0dbe
    RET                                 ; 004d0dc0
    MOV dword ptr [ECX],0x0             ; 004d0dc1
        ;   Label: LAB_004d0dc1
    RET                                 ; 004d0dc7

