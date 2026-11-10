; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dog1_cpp_CDog_renderTransparent_FUN_005ac720(CDog *this_ptr)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ac720
        ;   Label: core_dog1.cpp_CDog_renderTransparent_FUN_005ac720
    PUSH EDX                            ; 005ac724
    CALL core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980 ; 005ac725
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005ac72a
    TEST EAX,EAX                        ; 005ac72d
    SETNZ AL                            ; 005ac72f
    AND EAX,0xff                        ; 005ac732
    RET                                 ; 005ac737

