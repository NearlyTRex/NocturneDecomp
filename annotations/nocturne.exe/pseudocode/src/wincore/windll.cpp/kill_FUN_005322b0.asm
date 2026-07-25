; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl wincore_windll_cpp_kill_FUN_005322b0(void)
;
;
; XREF[3]:
;   FUN_00532f50 at 00532f52
;   FUN_00552cb0 at 00552cdc
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d022d
;
; Referenced Globals:
;   undefined4 DAT_02dc9d78
;   undefined4 DAT_02dc9e04
;
; Called Functions:
;   FUN_00530d40
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9e04],0x0      ; 005322b0 | DAT_02dc9e04
        ;   Label: wincore_windll.cpp_kill_FUN_005322b0
    JNZ 0x005322bf                      ; 005322b7
        ;   XREF to: 005322bf (CONDITIONAL_JUMP)  ; LAB_005322bf
    MOV EAX,0x1                         ; 005322b9
    RET                                 ; 005322be
    CALL dword ptr [0x02dc9d78]         ; 005322bf | DAT_02dc9d78
        ;   Label: LAB_005322bf
    CALL FUN_00530d40                   ; 005322c5
        ;   XREF to: 00530d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00530d40()
    MOV EAX,0x1                         ; 005322ca
    RET                                 ; 005322cf

