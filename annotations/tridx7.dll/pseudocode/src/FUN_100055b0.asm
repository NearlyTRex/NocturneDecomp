; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100055b0(void)
;
;
; XREF[1]:
;   __fpmath at 10005580
;
; Referenced Globals:
;   void* PTR___fptrap_10016d48 = 10009ab0
;   void* PTR___fptrap_10016d4c = 10009ab0
;   void* PTR___fptrap_10016d50 = 10009ab0
;   void* PTR___fptrap_10016d54 = 10009ab0
;   void* PTR___fptrap_10016d58 = 10009ab0
;   void* PTR___fptrap_10016d5c = 10009ab0
;
; *****************************************************************************

section .text

    MOV dword ptr [0x10016d4c],0x10006f60 ; 100055b0 | PTR___fptrap_10016d4c | LAB_10006f60
        ;   Label: FUN_100055b0
    MOV dword ptr [0x10016d50],0x10006fe0 ; 100055ba | PTR___fptrap_10016d50 | LAB_10006fe0
    MOV dword ptr [0x10016d54],0x10006ef0 ; 100055c4 | PTR___fptrap_10016d54 | LAB_10006ef0
    MOV dword ptr [0x10016d58],0x10006fc0 ; 100055ce | PTR___fptrap_10016d58 | LAB_10006fc0
    MOV EAX,0x10007380                  ; 100055d8 | LAB_10007380
    MOV [0x10016d48],EAX                ; 100055dd | PTR___fptrap_10016d48
    MOV [0x10016d5c],EAX                ; 100055e2 | PTR___fptrap_10016d5c
    RET                                 ; 100055e7

