; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_0059d350_cpp_FUN_0059dbe0(int param_1,int param_2)
;
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 005a00cf
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dbe0
        ;   Label: unkaddr_0059d350.cpp_FUN_0059dbe0
    CMP dword ptr [EDX + 0x838],0x0     ; 0059dbe4
    JZ 0x0059daad                       ; 0059dbeb
        ;   XREF to: 0059daad (CONDITIONAL_JUMP)  ; LAB_0059daad
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059dbf1
    SHL EAX,0x5                         ; 0059dbf5
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x210] ; 0059dbf8
    RET                                 ; 0059dbff

