; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_muzzle_cpp_SStateMachine_getRefStateTarget_FUN_0059dbe0(SStateMachine *this_ptr,int index)
;
; Parameters:
; SStateMachine *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 005a00cf
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dbe0
        ;   Label: core_muzzle.cpp_SStateMachine_getRefStateTarget_FUN_0059dbe0
    CMP dword ptr [EDX + 0x838],0x0     ; 0059dbe4
    JZ 0x0059daad                       ; 0059dbeb
        ;   XREF to: 0059daad (CONDITIONAL_JUMP)  ; LAB_0059daad
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059dbf1
    SHL EAX,0x5                         ; 0059dbf5
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x210] ; 0059dbf8
    RET                                 ; 0059dbff

