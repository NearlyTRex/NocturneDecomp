; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_0056d4d0(void)
;
;
; Referenced Globals:
;   byte g_TimezoneInitFlags = 0x1
;
; *****************************************************************************

section .text

    MOV DL,byte ptr [0x005c1f20]        ; 0056d4d0 | g_TimezoneInitFlags
        ;   Label: crt_unknown.c_FUN_0056d4d0
    MOV EAX,[0x005c1f20]                ; 0056d4d6 | g_TimezoneInitFlags
    AND DL,0xfc                         ; 0056d4db
    AND EAX,0x1                         ; 0056d4de
    MOV byte ptr [0x005c1f20],DL        ; 0056d4e1 | g_TimezoneInitFlags
    RET                                 ; 0056d4e7

