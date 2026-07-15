; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_startup_c__GET_RTERRMSG_FUN_10008800(int rterrnum)
;
; Parameters:
; int              Stack[0x4]:4   rterrnum
;
; Referenced Globals:
;   TerminatedCString s_R6009_not_enough_space_f_100125f4
;   TerminatedCString s_R6008_not_enough_space_f_10012620
;   undefined4 DAT_10016ff8
;   undefined4 DAT_10017000
;   void* PTR_s_R6008_not_enough_space_f_10012620_10017004 = 10012620
;   undefined4 DAT_10017008
;   void* PTR_s_R6009_not_enough_space_f_100125f4_1001700c = 100125f4
;   undefined4 DAT_10017080
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 10008800
        ;   Label: crt_startup.c__GET_RTERRMSG_FUN_10008800
    MOV ECX,0x10016ff8                  ; 10008802 | DAT_10016ff8
    MOV EDX,dword ptr [ESP + 0x4]       ; 10008807
    CMP dword ptr [ECX],EDX             ; 1000880b | DAT_10016ff8 | DAT_10017000
        ;   Label: LAB_1000880b
    JZ 0x1000881b                       ; 1000880d
        ;   XREF to: 1000881b (CONDITIONAL_JUMP)  ; LAB_1000881b
    ADD ECX,0x8                         ; 1000880f
    INC EAX                             ; 10008812
    CMP ECX,0x10017080                  ; 10008813 | DAT_10017080
    JC 0x1000880b                       ; 10008819
        ;   XREF to: 1000880b (CONDITIONAL_JUMP)  ; LAB_1000880b
    SHL EAX,0x3                         ; 1000881b
        ;   Label: LAB_1000881b
    CMP dword ptr [EAX + 0x10016ff8],EDX ; 1000881e | DAT_10017008 | DAT_10017000
    JNZ 0x1000882d                      ; 10008824
        ;   XREF to: 1000882d (CONDITIONAL_JUMP)  ; LAB_1000882d
    MOV EAX,dword ptr [EAX + 0x10016ffc] ; 10008826 | PTR_s_R6009_not_enough_space_f_100125f4_1001700c | = "R6009\r\n- not enough space for envir..." | PTR_s_R6008_not_enough_space_f_10012620_10017004
    RET                                 ; 1000882c
    XOR EAX,EAX                         ; 1000882d
        ;   Label: LAB_1000882d
    RET                                 ; 1000882f

